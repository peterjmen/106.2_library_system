#include "suclogin.h"
#include "ui_suclogin.h"
#include "mainwindow.h"
#include "bookmodal.h"


#include <QLabel>
#include <QBoxLayout>
#include <QVector>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QTextBrowser>
#include <QPushButton>
#include <QMessageBox>


//Vectors to hold book pictures and info
QVector < QPushButton * > bookCoversList;
QVector < QTextBrowser * > bookInformation;
QVector < QPushButton * > reserveBookButtonVector; //button
QVector < QLabel * > bookQuantityVertLayoutVector;

QVector < QLabel * > userReservedBooksVector;
QVector < QLabel * > dateReservedVector;
QVector < QLabel * > dueDateReservedVector;
QVector < QLabel * > dashboardookStatusVector;
QVector < QPushButton * > returnButtonVector;

//QVector<QString> listOfReservedBooks;

sucLogin::sucLogin(QWidget * parent):
  QDialog(parent),
  ui(new Ui::sucLogin) {
    ui -> setupUi(this);

    //creates a window object of main window to allow for getters from maind
    MainWindow * window = qobject_cast < MainWindow * > (parent);
    //Set getloggedInUserName (from mainwindow.h) to successful login name
    ui -> loggedInUsernameLabel -> setText("Welcome User: " + window -> getloggedInUserName());

    //gets id Number associated with with username as int + converts it to QString so can change label name
    //changes loggedInUsernameID qlabel to ID number
    ui -> loggedInUsernameID -> setText("ID number: " + QString::number(window -> getloggedInUserID()));
    userID = QString::number(window -> getloggedInUserID());

    //Reads "Books" Fine and generates 2d array with information
    // fManager being a FileManager class instance declared in mainwindow.h with methods to ReadFile, WriteFile and CheckValidUser
    bookCatalogue = fManager.ReadFile("book_catalogue_file", 12);

    reservedRecordArray = fManager.ReadFile("Reserved_books_file", 6);

    // connects scroll area's with layout boxes
    ui -> scrollContents -> setLayout(ui -> horizontalLayout);
    ui -> scrollAreaReservedBooks_Area -> setLayout(ui -> reservedBooks);
    ui -> yourReservedBooks_scrollArea -> setLayout(ui -> allReservedBookInfo);
    ui -> recc_genre_scrollArea -> setLayout(ui -> reccomended_genre_window);

    //Cover pics
    // if using resource folder instead, path is    :/images/Resources/grudges.jpg
    for (int i = 0; i < bookCatalogue.length(); i++) {
      QPixmap bookCover(bookCatalogue.at(i).at(0)); //0 because column 1 of pics is 0
      QPushButton * labelPic = new QPushButton(this);
      QPixmap map(bookCover);
      labelPic -> setFixedSize(84, 125);
      labelPic -> setIconSize(QSize(84, 125));
      labelPic -> setIcon(map);
      labelPic -> connect(labelPic, SIGNAL(clicked()), this, SLOT(bookPicClicked()));
      labelPic -> setProperty("bookIndex", i);
      bookCoversList.append(labelPic);
      ui -> bookCoverVertLayout -> addWidget(bookCoversList[i]);

      //Book info
      // adds book info columns 1,2 + 3 into a string and displays it in a text browser box
      QTextBrowser * info = new QTextBrowser(this);
      info -> setMaximumHeight(125);
      info -> setText(
        "Title: " + bookCatalogue.at(i).at(1) + "\n" +
        "Author: " + bookCatalogue.at(i).at(2) + "\n" +
        "Description: " + bookCatalogue.at(i).at(3) + "\n"
      );
      bookInformation.append(info);
      ui -> bookInfoVertLayout -> addWidget(bookInformation[i]);

      //Quantity label
      QLabel * bookQuantityLabel = new QLabel(this);
      bookQuantityLabel -> setText("Quantity:\n" + bookCatalogue.at(i).at(5));
      bookQuantityLabel -> setProperty("bookIndex", i);
      bookQuantityVertLayoutVector.append(bookQuantityLabel);

      ui -> bookQuantityVertLayout -> addWidget(bookQuantityVertLayoutVector[i]);

      //add reserve book buttons which populates vector with book title
      //cast i into string
      QString iterationAsString = QString::number(i);
      QPushButton * reserveBook = new QPushButton("Reserve book \n" + bookCatalogue.at(i).at(1));
      reserveBook -> setProperty("bookIndex", i);
      reserveBook -> setStyleSheet("background-color:#858D6F; color: rgb(255, 255, 255);");




      connect(reserveBook, SIGNAL(clicked()), this, SLOT(reserveBookClicked()));

      reserveBookButtonVector.append(reserveBook);
      ui -> bookOptions -> addWidget(reserveBookButtonVector[i]);
      if (bookCatalogue.at(i).at(5).toInt() <= 0) {
        QSizePolicy sp_retain = reserveBook -> sizePolicy();
        sp_retain.setRetainSizeWhenHidden(true);
        reserveBook -> setSizePolicy(sp_retain);




      }

    }

    //creating array for books reserved books to display in dashboard
    for (int i = 0; i < reservedRecordArray.length(); i++) {
      if (userID == reservedRecordArray.at(i).at(0)) {

        //Qlabel with book name
        QLabel * recordedReservedBooksOnDashboard = new QLabel(reservedRecordArray.at(i).at(1));
        userReservedBooksVector.append(recordedReservedBooksOnDashboard);
        ui -> yourReservedBooksList -> addWidget(userReservedBooksVector[userReservedBooksVector.length() - 1]);

        //QLabel with date reserved
        QLabel * dateReserved = new QLabel(reservedRecordArray.at(i).at(2));
        dateReservedVector.append(dateReserved);
        ui -> yourReservedBooksListReservedDate -> addWidget(dateReservedVector[dateReservedVector.length() - 1]);

        //QLabel with datedue
        QLabel * dueDate = new QLabel(reservedRecordArray.at(i).at(3));
        dueDateReservedVector.append(dueDate);
        ui -> yourReservedBooksListDueDate -> addWidget(dueDateReservedVector[dueDateReservedVector.length() - 1]);

        //QLabel status⬇
        QLabel * bookStatus = new QLabel(reservedRecordArray.at(i).at(4));
        bookStatus -> setProperty("statusLabelNumber", dueDateReservedVector.length() - 1);

        //check book status and change to due/on loan/due soon

        QDate reservedDateToCompare = QDate::currentDate();
        QDate dueDateToCompare = QDate::fromString(reservedRecordArray.at(i).at(3), "dd/MM/yyyy");

        if (reservedDateToCompare.daysTo(dueDateToCompare) < 1 && reservedRecordArray.at(i).at(4) != "Returned") {
          bookStatus -> setAutoFillBackground(true);
          bookStatus -> setStyleSheet("background-color: red");
          reservedRecordArray[i][4] = "Overdue";
          bookStatus -> setText("Overdue");
        } else if (reservedDateToCompare.daysTo(dueDateToCompare) < 3 && reservedRecordArray.at(i).at(4) != "Returned") {
          bookStatus -> setAutoFillBackground(true);
          bookStatus -> setStyleSheet("background-color: yellow");
          reservedRecordArray[i][4] = "Due-Soon";
          bookStatus -> setText("Due-soon");
        } else if (reservedRecordArray.at(i).at(4) == "Returned") {
          bookStatus -> setAutoFillBackground(true);
          bookStatus -> setStyleSheet("background-color: green");
        } else if (reservedDateToCompare.daysTo(dueDateToCompare) >= 3 && reservedRecordArray.at(i).at(4) != "Returned") {
          reservedRecordArray[i][4] = "On-Loan";
          bookStatus -> setText("On-Loan");
        } else {
          reservedRecordArray[i][4] = "Anomolie";
        }

        dashboardookStatusVector.append(bookStatus);
        ui -> yourReservedBooksListStatus -> addWidget(dashboardookStatusVector[dashboardookStatusVector.length() - 1]);
        //⬆QLabel status

        //return book button
        QPushButton * returnButton = new QPushButton("Return");
        returnButton -> setStyleSheet("background-color:#858D6F ; color: rgb(255, 255, 255);");
        //goto


        for (int j = 0; j < bookCatalogue.length(); j++) {
          if (bookCatalogue.at(j).at(1) == reservedRecordArray.at(i).at(1)) {
            //                    int catToInt = bookCatalogue.at(2).at(4).toInt();
            returnButton -> setProperty("reservedBookIndex", bookCatalogue.at(j).at(4).toInt());

          }
        }

        returnButton -> setProperty("returnButtonNumberNumber", dueDateReservedVector.length() - 1);
        connect(returnButton, SIGNAL(clicked()), this, SLOT(returnBookClicked()));
        //add button
        returnButtonVector.append(returnButton);
        ui -> yourReservedBooksListReturnButton -> addWidget(returnButtonVector[returnButtonVector.length() - 1]);

        //^^^^ return book button


        if (reservedRecordArray.at(i).at(4) == "Returned") {
          QSizePolicy sp_retain = returnButtonVector[returnButtonVector.length() - 1] -> sizePolicy();
          sp_retain.setRetainSizeWhenHidden(true);
          returnButtonVector[returnButtonVector.length() - 1] -> setSizePolicy(sp_retain);
          returnButtonVector[returnButtonVector.length() - 1] -> hide();
        }
      }
    }

    //update reserved books file with andy changes
    QVector < QString > changes;
    QString oldFileToDelete = "Reserved_books_file.csv";
    // creates  file with namenew_...
    QString newFileWithEdits = "Reserved_books_file_changed";
    QString newFileWithEdits_csv = "Reserved_books_file_changed.csv";
    QFile file(newFileWithEdits);

    for (int i = 0; i < reservedRecordArray.length(); i++) {
      for (int j = 0; j < 6; j++) {
        changes.append(reservedRecordArray.at(i).at(j));
      }
      fManager.WriteFile(newFileWithEdits, changes);
      changes.clear();
    }

    QFile::remove(oldFileToDelete);
    QFile::rename(newFileWithEdits_csv, oldFileToDelete);


        //figure out top 5 books and show them as most popular on front page
    QVector<int> popularityChecker;
    for (int i = 0; i < bookCatalogue.length(); i++) {
        bookCatalogue[i][11].toInt();
        popularityChecker.append((bookCatalogue[i][11].toInt()));
    }
    std::sort(popularityChecker.rbegin(), popularityChecker.rend());


    QVector<QPushButton*> popularBooksVector;

    do{popularityChecker.pop_back();}
        while (popularityChecker.length() >5);

    for(int i = 0; i<bookCatalogue.length(); i++){
        for(int j = 0; j<popularityChecker.length(); j++){
        if(bookCatalogue.at(i).at(11).toInt() == popularityChecker[j]){

              QPixmap popular_bookCover(bookCatalogue.at(i).at(0)); //0 because column 1 of pics is 0
              QPushButton * popular_labelPic = new QPushButton(this);
              QPixmap map(popular_bookCover);
              popular_labelPic -> setFixedSize(84, 125);
              popular_labelPic -> setIconSize(QSize(84, 125));
              popular_labelPic -> setIcon(map);
              popular_labelPic -> setProperty("bookIndex", i);
              popular_labelPic -> connect(popular_labelPic, SIGNAL(clicked()), this, SLOT(bookPicClicked()));
              popularBooksVector.append(popular_labelPic);
              }
        }
    }

        for(int i = 0; i<popularBooksVector.length(); i++){
              ui -> reccomended_books_window -> addWidget(popularBooksVector[i]);
        }


        //Similar books by highest number of similar genre tags
        QVector<QString> rawGenreTags;
        QVector<QString> uniqueGenreTags;

        for(int i = 0; i<bookCatalogue.length(); i++){
            rawGenreTags.append(bookCatalogue[i][8]); //8 because genre 1 is column index 8
        }

        for(int i = 0; i <rawGenreTags.length(); i++){
            for (int j = 0; j <rawGenreTags.length(); j++){
                if (rawGenreTags.at(i) == rawGenreTags.at(j) && i != j){
                    rawGenreTags[j] = "duplicate";
                }}}

    //Filters out duplicate tags
        foreach (QString genreTag, rawGenreTags){
            if (genreTag != "duplicate"){
            uniqueGenreTags.append(genreTag);
        }
        }

        QVector<int> genreCounter;
        foreach (QString genreTag, uniqueGenreTags){
        genreCounter.append(0);
        }


       for  (int i = 0; i<reservedRecordArray.length(); i++){
       if (userID == reservedRecordArray.at(i).at(0)){
           for  (int j = 0; j<genreCounter.length(); j++){
               if (uniqueGenreTags.at(j) == bookCatalogue.at(reservedRecordArray[i][5].toInt()).at(8)){
                   genreCounter[j]++;
               }
           }

       }
       }

       //Matches up genre counter with genre label and puts genre in column 0 of a 2d vector and numberof times checked out column 1
       QVector<QVector<QString>> faveGenreVector_2d;
       QVector<QString> combinedTagAndCounter;
       for  (int i = 0; i<genreCounter.length(); i++){
           combinedTagAndCounter.append(uniqueGenreTags[i]);
           combinedTagAndCounter.append(QString::number(genreCounter[i]));
           faveGenreVector_2d.append(combinedTagAndCounter);
           combinedTagAndCounter.clear();
       }


       qDebug() << genreCounter;

       for  (int i = 0; i<faveGenreVector_2d.length(); i++){
           { for  (int j = 0; j<2; j++){
                  qDebug() << faveGenreVector_2d.at(i).at(j);
               }
               }
       }


       //Creates a vector of top 3 most read genre's
       QVector<QString> top3Genre;
       for (int i = 0; i<3; i++){
       for (int j = 0; j<faveGenreVector_2d.length(); j++){
        int biggestNumber = 0;
           for (int k = 0; k<faveGenreVector_2d.length(); k++){
           if (biggestNumber <= faveGenreVector_2d[k][1].toInt() ){
              biggestNumber = faveGenreVector_2d[k][1].toInt();
           }
           }
           if (faveGenreVector_2d[j][1] == QString::number(biggestNumber) && biggestNumber !=0){
                top3Genre.append(faveGenreVector_2d[j][0]);
                faveGenreVector_2d[j][1] = "0";
           }
       }
       }

       qDebug() << top3Genre;
       //top 3 fav genre's found

       QVector<QPushButton*> reccomendedBooksByGenre;
       do{popularityChecker.pop_back();}
           while (popularityChecker.length() >5);

       for(int i = 0; i<bookCatalogue.length(); i++){
           for(int j = 0; j<top3Genre.length(); j++){
           if(bookCatalogue.at(i).at(8) == top3Genre[j]){

                 QPixmap rec_genre_bookCover(bookCatalogue.at(i).at(0)); //0 because column 1 of pics is 0
                 QPushButton * rec_genre_labelPic = new QPushButton(this);
                 QPixmap map(rec_genre_bookCover);
                 rec_genre_labelPic -> setFixedSize(84, 125);
                 rec_genre_labelPic -> setIconSize(QSize(84, 125));
                 rec_genre_labelPic -> setIcon(map);
                 rec_genre_labelPic -> setProperty("bookIndex", i);
                 rec_genre_labelPic -> connect(rec_genre_labelPic, SIGNAL(clicked()), this, SLOT(bookPicClicked()));
                 reccomendedBooksByGenre.append(rec_genre_labelPic);
                 }
           }
       }

           for(int i = 0; i<reccomendedBooksByGenre.length(); i++){
                 ui -> reccomended_genre_window -> addWidget(reccomendedBooksByGenre[i]);
           }






  };

sucLogin::~sucLogin() {
  delete ui;
}

void sucLogin::on_pushButton_logout_clicked() {

  // 🔽clears widgets and vectors to prevent memory leak & doubling up on catalogue
  for (int i = 0; i < bookCatalogue.length(); i++) {
    ui -> bookInfoVertLayout -> removeWidget(bookInformation[i]);
    ui -> bookInfoVertLayout -> removeWidget(bookCoversList[i]);
    ui -> bookInfoVertLayout -> removeWidget(reserveBookButtonVector[i]);
    ui -> bookQuantityVertLayout -> removeWidget(bookQuantityVertLayoutVector[i]);
  }

  for (int i = 0; i < userReservedBooksVector.length(); i++) {
    ui -> yourReservedBooksList -> removeWidget(userReservedBooksVector[i]);
    ui -> yourReservedBooksList -> removeWidget(dateReservedVector[i]);
  }

  qDeleteAll(bookCoversList);
  bookCoversList.clear();
  qDeleteAll(bookInformation);
  bookInformation.clear();
  qDeleteAll(reserveBookButtonVector);
  reserveBookButtonVector.clear();
  qDeleteAll(userReservedBooksVector);
  userReservedBooksVector.clear();
  qDeleteAll(dateReservedVector);
  dateReservedVector.clear();
  qDeleteAll(bookQuantityVertLayoutVector);
  bookQuantityVertLayoutVector.clear();
  // 🔼end of clear

  //closes sucLogin window and re-opens mainwindow fresh
  hide();
  MainWindow * mainWindow = new MainWindow();
  mainWindow -> show();
}

void sucLogin::on_bookSearchButton_clicked() {

  QString searchedText = ui -> lineEdit_bookSearchText -> text();

  //Code block needed to clear dashboard widgets so that it can repopulate it with changes (preventing double ups on previous items)
  //clears widgets and vectors to prevent memory leak & doubling up on catalogue
  for (int i = 0; i < bookCatalogue.length(); i++) {
    ui -> bookInfoVertLayout -> removeWidget(bookInformation[i]);
    ui -> bookCoverVertLayout -> removeWidget(bookCoversList[i]);
    ui -> bookOptions -> removeWidget(reserveBookButtonVector[i]);
    ui -> bookQuantityVertLayout -> removeWidget(bookQuantityVertLayoutVector[i]);
  }

  qDeleteAll(bookCoversList);
  bookCoversList.clear();
  qDeleteAll(bookInformation);
  bookInformation.clear();
  qDeleteAll(reserveBookButtonVector);
  reserveBookButtonVector.clear();
  qDeleteAll(bookQuantityVertLayoutVector);
  bookQuantityVertLayoutVector.clear();
  // ---Dashboard code block over

  //Reads book catalogue and creates widgets for title, author, description, book cover, quantity availible
  for (int i = 0; i < bookCatalogue.length(); i++) {
    //Book Title, Authoer & Description shown in QTextBrowser widget
    QTextBrowser * info = new QTextBrowser(this);
    info -> setMaximumHeight(125);
    info -> setText(
      "Title: " + bookCatalogue.at(i).at(1) + "\n" +
      "Author: " + bookCatalogue.at(i).at(2) + "\n" +
      "Description: " + bookCatalogue.at(i).at(3) + "\n"
    );
    bookInformation.append(info);

    //Book Quantity label
    QLabel * bookQuantityLabel = new QLabel(this);
    bookQuantityLabel -> setText("Quantity:\n" + bookCatalogue.at(i).at(5));
    bookQuantityLabel -> setProperty("bookIndex", i);
    bookQuantityVertLayoutVector.append(bookQuantityLabel);

    //Push button with Book cover
    QPixmap bookCover(bookCatalogue.at(i).at(0)); //0 because column 1 of pics is 0
    QPushButton * labelPic = new QPushButton(this);
    QPixmap map(bookCover);
    labelPic -> setFixedSize(84, 125);
    labelPic -> setIconSize(QSize(84, 125));
    labelPic -> setIcon(map);
    labelPic -> setProperty("bookIndex", i);
    //Creates on click connection which brings up modal with book info
    labelPic -> connect(labelPic, SIGNAL(clicked()), this, SLOT(bookPicClicked()));
    bookCoversList.append(labelPic);

    //add reserve book buttons which populates vector with book title *** search version
    //cast i as string
    QString iterationAsString = QString::number(i);
    QPushButton * reserveBook = new QPushButton("Reserve book \n" + bookCatalogue.at(i).at(1) );
    reserveBook -> setProperty("bookIndex", i);

    connect(reserveBook, SIGNAL(clicked()), this, SLOT(reserveBookClicked()));
    reserveBookButtonVector.append(reserveBook);

    //hide reserve button in quantity = 0
    if (bookCatalogue.at(i).at(5).toInt() < 1) {
      QSizePolicy sp_retain = reserveBook -> sizePolicy();
      sp_retain.setRetainSizeWhenHidden(true);
      reserveBook -> setSizePolicy(sp_retain);
      reserveBook -> setStyleSheet("background-color: #CED2BA ; color: rgb(255, 255, 255);");
    }
    //reserve button section over

    //diplays books if they contain <<searchedText - within title, author, description, unique book number, series link number, genre1, genre2, genre3

    //comparing search to lower case to remove case sensetivity
    if (/*book title*/bookCatalogue[i][1].toLower().contains(searchedText.toLower()) ||
        /*book Author*/bookCatalogue[i][2].toLower().contains(searchedText.toLower()) ||
        /*book Description*/bookCatalogue[i][3].toLower().contains(searchedText.toLower()) ||
        /*book UniqueBN*/bookCatalogue[i][6].toLower().contains(searchedText.toLower()) ||
        /*book Seriescode*/bookCatalogue[i][7].toLower().contains(searchedText.toLower()) ||
        /*book Genre1*/bookCatalogue[i][8].toLower().contains(searchedText.toLower()) ||
        /*book Genre2*/bookCatalogue[i][9].toLower().contains(searchedText.toLower()) ||
        /*book Genre3*/bookCatalogue[i][10].toLower().contains(searchedText.toLower())
            )
    { //if found add widget to lists
      ui -> bookCoverVertLayout -> addWidget(bookCoversList[i]);
      ui -> bookInfoVertLayout -> addWidget(bookInformation[i]);
      ui -> bookOptions -> addWidget(reserveBookButtonVector[i]);
      ui -> bookQuantityVertLayout -> addWidget(bookQuantityVertLayoutVector[i]);
    }



  }
}


void sucLogin::reserveBookClicked() {

  // 🔽clears widgets and vectors to prevent memory leak & doubling up on catalogue



  for (int i = 0; i < userReservedBooksVector.length(); i++) {
    ui -> yourReservedBooksList -> removeWidget(userReservedBooksVector[i]);
    ui -> yourReservedBooksListReservedDate -> removeWidget(dateReservedVector[i]);
    ui -> yourReservedBooksListDueDate -> removeWidget(dueDateReservedVector[i]);
    ui -> yourReservedBooksListStatus -> removeWidget(dashboardookStatusVector[i]);
    ui -> yourReservedBooksListReturnButton -> removeWidget(returnButtonVector[i]);
  }

  qDeleteAll(userReservedBooksVector);
  userReservedBooksVector.clear();
  qDeleteAll(dateReservedVector);
  dateReservedVector.clear();
  qDeleteAll(dueDateReservedVector);
  dueDateReservedVector.clear();
  qDeleteAll(dashboardookStatusVector);
  dashboardookStatusVector.clear();
  qDeleteAll(returnButtonVector);
  returnButtonVector.clear();
  // 🔼end of clear

  //Reads Reserved Reserved_books_file and turns into into 2d array
  reservedRecordArray = fManager.ReadFile("Reserved_books_file", 6);

  //Creates a proxy of "reserveBook" QPushButton* as "pButton" to act as a local version of the "reserveBook" button so it can be accessed by proxy. Achieved by creating a pointer to the sender of the signal
  QPushButton * pButton = qobject_cast < QPushButton * > (sender());
  if (pButton) // this is the type we expect
  {
    bool bookAlreadyCheckedOut = false;
    //check to see if book is already reserved or not returned
    for (int i = 0; i < reservedRecordArray.length(); i++) {
      if (userID == reservedRecordArray.at(i).at(0) &&
        pButton -> property("bookIndex").toString() == reservedRecordArray.at(i).at(5) &&
        reservedRecordArray.at(i).at(4) != "Returned") {
        QMessageBox::warning(
          this,
          tr("=("),
          tr("You have already reserved this book or have it on loan"));
        bookAlreadyCheckedOut = true;
      }
    }

    if (bookAlreadyCheckedOut) {
      // do nothing as "you already have that book reserved";
    } else {

      //create a int to store the reserve whhich book index the reseve button corresponds to
      int bookIndexNum = pButton -> property("bookIndex").toInt();
      //Creates label displaying book title wich is added to dashboard
      QLabel * reservedBookListItem = new QLabel(bookCatalogue.at(bookIndexNum).at(1));
      ui -> reservedBooks -> addWidget(reservedBookListItem);

      //Creates vector to store reservation details to write to book reservation csv
      QVector < QString > bookReservationDetails;

      //sets date, and due tate to current date +7 days
      QDate cd = QDate::currentDate();
      QString currentDateAsString = cd.toString("dd/MM/yyyy");
      QDate dueDate = QDate::currentDate();
      dueDate = dueDate.addDays(7);
      QString dueDateAsString = dueDate.toString("dd/MM/yyyy");
      QString defaultStatusReserved = "Reserved";

      //adds all info to vector ready to be written to file
      bookReservationDetails.append(userID);
      bookReservationDetails.append(bookCatalogue.at(bookIndexNum).at(1));
      bookReservationDetails.append(currentDateAsString);
      bookReservationDetails.append(dueDateAsString);
      bookReservationDetails.append(defaultStatusReserved);
      bookReservationDetails.append(pButton -> property("bookIndex").toString());

      //Writes resevation details to records
      fManager.WriteFile("Reserved_books_file", bookReservationDetails);

      for (int i = 0; i < bookQuantityVertLayoutVector.length(); i++) {
        if (bookQuantityVertLayoutVector[i] -> property("bookIndex") == pButton -> property("bookIndex")) {

          int quantity = bookCatalogue.at(bookIndexNum).at(5).toInt();
          quantity--;
          bookQuantityVertLayoutVector[i] -> setText("Quantity: \n" + QString::number(quantity));
        }
      }

      //change availibility to -1 when reserve
      int availibilityToDecrement = bookCatalogue[bookIndexNum][5].toInt();
      availibilityToDecrement--;
      bookCatalogue[bookIndexNum][5] = QString::number(availibilityToDecrement);

      //increase times checked out by 1
      int timesCheckedOut = bookCatalogue[bookIndexNum][11].toInt();
      timesCheckedOut++;
      bookCatalogue[bookIndexNum][11] = QString::number(timesCheckedOut);

      QVector < QString > changes;

      QString oldFileToDelete = "book_catalogue_file.csv";

      // creates  file with namenew_...
      QString newFileWithEdits = "Books_availibility_changed";
      QString newFileWithEdits_csv = "Books_availibility_changed.csv";
      QFile file(newFileWithEdits);

      for (int i = 0; i < bookCatalogue.length(); i++) {
        for (int j = 0; j < 12; j++) {
          changes.append(bookCatalogue.at(i).at(j));
          //            changes.append(reservedRecordArray[i][j]);
          //            changes.append(reservedRecordArray[i][j]);
        }
        fManager.WriteFile(newFileWithEdits, changes);
        changes.clear();

      }

      QFile::remove(oldFileToDelete);
      QFile::rename(newFileWithEdits_csv, oldFileToDelete);
      //**avail decreased by 1

    }
  }
  //!****copy and pasted (most0 code to refesh dashboard
  //creating array for books reserved books to display in dashboard
  reservedRecordArray = fManager.ReadFile("Reserved_books_file", 6);

  for (int i = 0; i < reservedRecordArray.length(); i++) {
    if (userID == reservedRecordArray.at(i).at(0)) {

      //Qlabel with book name
      QLabel * recordedReservedBooksOnDashboard = new QLabel(reservedRecordArray.at(i).at(1));
      userReservedBooksVector.append(recordedReservedBooksOnDashboard);
      ui -> yourReservedBooksList -> addWidget(userReservedBooksVector[userReservedBooksVector.length() - 1]);

      //QLabel with date reserved
      QLabel * dateReserved = new QLabel(reservedRecordArray.at(i).at(2));
      dateReservedVector.append(dateReserved);
      ui -> yourReservedBooksListReservedDate -> addWidget(dateReservedVector[dateReservedVector.length() - 1]);

      //QLabel with datedue
      QLabel * dueDate = new QLabel(reservedRecordArray.at(i).at(3));
      dueDateReservedVector.append(dueDate);
      ui -> yourReservedBooksListDueDate -> addWidget(dueDateReservedVector[dueDateReservedVector.length() - 1]);


      //QLabel status //QLabel status start
      QLabel * bookStatus = new QLabel(reservedRecordArray.at(i).at(4));
      bookStatus -> setProperty("statusLabelNumber", dueDateReservedVector.length() - 1);
      dashboardookStatusVector.append(bookStatus);
      ui -> yourReservedBooksListStatus -> addWidget(dashboardookStatusVector[dashboardookStatusVector.length() - 1]);

      QDate reservedDateToCompare = QDate::currentDate();
      QDate dueDateToCompare = QDate::fromString(reservedRecordArray.at(i).at(3), "dd/MM/yyyy");

      if (reservedDateToCompare.daysTo(dueDateToCompare) < 1 && reservedRecordArray.at(i).at(4) != "Returned") {
        bookStatus -> setAutoFillBackground(true);
        bookStatus -> setStyleSheet("background-color: red");
        reservedRecordArray[i][4] = "Overdue";
        bookStatus -> setText("Overdue");
      } else if (reservedDateToCompare.daysTo(dueDateToCompare) < 3 && reservedRecordArray.at(i).at(4) != "Returned") {
        bookStatus -> setAutoFillBackground(true);
        bookStatus -> setStyleSheet("background-color: yellow");
        reservedRecordArray[i][4] = "Due-Soon";
        bookStatus -> setText("Due-soon");
      } else if (reservedRecordArray.at(i).at(4) == "Returned") {
        bookStatus -> setAutoFillBackground(true);
        bookStatus -> setStyleSheet("background-color: green");
      }
      //!section unique to search button clicked
      else if (reservedDateToCompare.daysTo(dueDateToCompare) >= 3 && reservedRecordArray.at(i).at(4) != "Returned") {
        //do nothing to keep as "Reserved"
      } else {
        reservedRecordArray[i][4] = "Anomolie";
      }
      //!section unique to search button clicked
      //QLabel status end


      //return book button
      QPushButton * returnButton = new QPushButton("Return");
      returnButton -> setStyleSheet("background-color:#858D6F ; color: rgb(255, 255, 255);");

      for (int j = 0; j < bookCatalogue.length(); j++) {
        if (bookCatalogue.at(j).at(1) == reservedRecordArray.at(i).at(1)) {
          //WHY DOES EVERYTHING REPEAT                     int catToInt = bookCatalogue.at(2).at(4).toInt();
          returnButton -> setProperty("reservedBookIndex", bookCatalogue.at(j).at(4).toInt());

        }
      }

      returnButton -> setProperty("returnButtonNumberNumber", dueDateReservedVector.length() - 1);
      connect(returnButton, SIGNAL(clicked()), this, SLOT(returnBookClicked()));
      //add button
      returnButtonVector.append(returnButton);

      ui -> yourReservedBooksListReturnButton -> addWidget(returnButtonVector[returnButtonVector.length() - 1]);
      //^^^^ return book button


      if (reservedRecordArray.at(i).at(4) == "Returned") {
        QSizePolicy sp_retain = returnButtonVector[returnButtonVector.length() - 1] -> sizePolicy();
        sp_retain.setRetainSizeWhenHidden(true);
        returnButtonVector[returnButtonVector.length() - 1] -> setSizePolicy(sp_retain);
        returnButtonVector[returnButtonVector.length() - 1] -> hide();
      }
    }
  }

};

void sucLogin::bookPicClicked() {
  QPushButton * pButton = qobject_cast < QPushButton * > (sender());
  if (pButton) // this is the type we expect
  {
    BookModal * modal = new BookModal(this);

    modal -> modalBookCat = bookCatalogue;
    modal -> modalBookIndex = pButton -> property("bookIndex").toString();
    modal -> show();
    modal -> setModal(true);
    modal -> AssignInfo();
  }
}

void sucLogin::returnBookClicked() {

  reservedRecordArray = fManager.ReadFile("Reserved_books_file", 6);
  bookCatalogue = fManager.ReadFile("book_catalogue_file", 12);

  QPushButton * pButton = qobject_cast < QPushButton * > (sender());
  if (pButton) // this is the type we expect
  {
    int bookIndexNum = pButton -> property("reservedBookIndex").toInt();

    //***change availibility in book catalogue *** **avail increased by 1
    int bookAvailColumn = 5;
    int bookNumAvailible = bookCatalogue.at(bookIndexNum).at(bookAvailColumn).toInt();
    //        if (bookNumAvailible > 0){
    bookNumAvailible++;
    QString change = QString::number(bookNumAvailible);
    bookCatalogue[bookIndexNum][bookAvailColumn] = change;

    QVector < QString > changes;

    QString oldFileToDelete = "book_catalogue_file.csv";

    // creates  file with namenew_...
    QString newFileWithEdits = "Books_availibility_changed";
    QString newFileWithEdits_csv = "Books_availibility_changed.csv";
    QFile file(newFileWithEdits);

    for (int i = 0; i < bookCatalogue.length(); i++) {
      for (int j = 0; j < 12; j++) { //12 due to book catalogue columns length
        changes.append(bookCatalogue.at(i).at(j));
        //            changes.append(reservedRecordArray[i][j]);
        //            changes.append(reservedRecordArray[i][j]);
      }
      fManager.WriteFile(newFileWithEdits, changes);
      changes.clear();

    }

    QFile::remove(oldFileToDelete);
    QFile::rename(newFileWithEdits_csv, oldFileToDelete);

    //Checks corresponding return button matches the records to return book
    for (int i = 0; i < reservedRecordArray.length(); i++) {
      int bookStatusColumn = 4;
      if (reservedRecordArray.at(i).at(bookStatusColumn) != "Returned" &&
        userID == reservedRecordArray.at(i).at(0) // title in row matches
        &&
        reservedRecordArray.at(i).at(5) == pButton -> property("reservedBookIndex")) { //book index as string matches

        QString change = "Returned";
        reservedRecordArray[i][bookStatusColumn] = change;

        QVector < QString > changes;

        QString oldFileToDelete = "Reserved_books_file.csv";

        // creates  file with namenew_...
        QString newFileWithEdits = "Reserved_books_file_changed";
        QString newFileWithEdits_csv = "Reserved_books_file_changed.csv";
        QFile file(newFileWithEdits);

        for (int i = 0; i < reservedRecordArray.length(); i++) {
          for (int j = 0; j < 6; j++) {
            changes.append(reservedRecordArray.at(i).at(j));
          }
          fManager.WriteFile(newFileWithEdits, changes);
          changes.clear();

        }

        QFile::remove(oldFileToDelete);
        QFile::rename(newFileWithEdits_csv, oldFileToDelete);

        //Changes corresponding return button and book status to returned
        int numberForStatusColumn = pButton -> property("returnButtonNumberNumber").toInt();
        dashboardookStatusVector[numberForStatusColumn] -> setText("Returned");
        dashboardookStatusVector[numberForStatusColumn] -> setAutoFillBackground(true);
        dashboardookStatusVector[numberForStatusColumn] -> setStyleSheet("background-color: green");

        //changes Quantity label to reflect quantity in text file changes quantity to +1 if book is returned
        for (int i = 0; i < bookQuantityVertLayoutVector.length(); i++) {
          if (bookQuantityVertLayoutVector[i] -> property("bookIndex") == pButton -> property("reservedBookIndex")) {

            int quantity = bookCatalogue.at(bookIndexNum).at(5).toInt();
            bookQuantityVertLayoutVector[i] -> setText("Quantity: \n" + QString::number(quantity));
            reserveBookButtonVector[i] -> show();
          }
        }
      }
    }

    //hide button and retain space when clicked
    QSizePolicy sp_retain = pButton -> sizePolicy();
    sp_retain.setRetainSizeWhenHidden(true);
    pButton -> setSizePolicy(sp_retain);
    pButton -> hide();

  }

}
