#include "adminwindow.h"

#include "ui_adminwindow.h"
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

#include <QApplication>
#include <QProcess>

//Vectors to hold book pictures and info
QVector < QPushButton * > bookCoversListAdmin;
QVector < QPushButton * > bookCoversListNotifsAdmin;
QVector < QTextBrowser * > bookInformationAdmin;
QVector < QPushButton * > editBookButtonVectorAdmin; //button for editing books
QVector < QPushButton * > deleteBookButtonVectorAdmin; //button for deleting books
QVector < QLabel * > bookQuantityVertLayoutVectorAdmin;

QVector < QLabel  * > userReservedBooksVectorAdmin; //shows all reserved books by all users
QVector < QLabel  * > dateReservedVectorAdmin;
QVector < QLabel * > dueDateReservedVectorAdmin;
QVector < QLabel * > dashboardookStatusVectorAdmin;

QVector < QTextBrowser * > allUserNameAdmin;
QVector < QTextBrowser * > allUserIDAdmin;
QVector < QTextBrowser * > allUserPassAdmin;
QVector < QTextBrowser * > bookTitleAdmin;
QVector < QPushButton * > editUserButtonVectorAdmin; //button for editing users
QVector < QPushButton * > deleteUserButtonVectorAdmin; //button for deleting users

adminWindow::adminWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminWindow)
{
    ui->setupUi(this);


    //creates a window object of main window to allow for getters from maind
    MainWindow * window = qobject_cast < MainWindow * > (parent);


    //Reads "Books" Fine and generates 2d array with information
    // fManager being a FileManager class instance declared in mainwindow.h with methods to ReadFile, WriteFile and CheckValidUser
    bookCatalogue = fManager.ReadFile("book_catalogue_file", 12);

    reservedRecordArray = fManager.ReadFile("Reserved_books_file", 6);

    accountArray = fManager.ReadFile("accountInformation", 4);

    // connects scroll area's with layout boxes
    ui -> scrollContents -> setLayout(ui -> horizontalLayout);
    ui -> scrollContents_2 -> setLayout(ui -> horizontalLayout_2);


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
      bookCoversListAdmin.append(labelPic);
      ui -> bookCoverVertLayout -> addWidget(bookCoversListAdmin[i]);

      //Book info
      // adds book info columns 1,2 + 3 into a string and displays it in a text browser box
      QTextBrowser * info = new QTextBrowser(this);
      info -> setMaximumHeight(125);
      info -> setText(
        "Title: " + bookCatalogue.at(i).at(1) + "\n" +
        "Author: " + bookCatalogue.at(i).at(2) + "\n" +
        "Description: " + bookCatalogue.at(i).at(3) + "\n"
      );
      bookInformationAdmin.append(info);
      ui -> bookInfoVertLayout -> addWidget(bookInformationAdmin[i]);

      //Quantity label
      QLabel * bookQuantityLabel = new QLabel(this);
      bookQuantityLabel -> setText("Quantity:\n" + bookCatalogue.at(i).at(5));
      bookQuantityLabel -> setProperty("bookIndex", i);
      bookQuantityVertLayoutVectorAdmin.append(bookQuantityLabel);

      ui -> bookQuantityVertLayout -> addWidget(bookQuantityVertLayoutVectorAdmin[i]);

      //add edit book buttons which populates vector with book title
      //cast i into string
      QString iterationAsString = QString::number(i);
      QPushButton * editBook = new QPushButton("edit book \n" + bookCatalogue.at(i).at(1));
      editBook -> setProperty("bookIndex", i);
      editBook -> setStyleSheet("background-color:#858D6F; color: rgb(255, 255, 255);");




      connect(editBook, SIGNAL(clicked()), this, SLOT(editBookClicked()));

      editBookButtonVectorAdmin.append(editBook);
      ui -> bookEditVertLayout -> addWidget(editBookButtonVectorAdmin[i]);
      if (bookCatalogue.at(i).at(5).toInt() <= 0) {
        QSizePolicy sp_retain = editBook -> sizePolicy();
        sp_retain.setRetainSizeWhenHidden(true);
        editBook -> setSizePolicy(sp_retain);
        editBook -> setStyleSheet("background-color:#CED2BA ; color: rgb(255, 255, 255);");
      }


      //end of edit buttons

      //add delete book buttons which populates vector with book title
      //cast i into string
      QString iterationAsStringDel = QString::number(i);
      QPushButton * deleteBook = new QPushButton("delete book \n" + bookCatalogue.at(i).at(1));
      deleteBook -> setProperty("bookIndex", i);
      deleteBook -> setStyleSheet("background-color:#858D6F; color: rgb(255, 255, 255);");




      connect(deleteBook, SIGNAL(clicked()), this, SLOT(deleteBookClicked()));

      deleteBookButtonVectorAdmin.append(deleteBook);
      ui -> bookDeleteVertLayout -> addWidget(deleteBookButtonVectorAdmin[i]);
      if (bookCatalogue.at(i).at(5).toInt() <= 0) {
        QSizePolicy sp_retain = deleteBook -> sizePolicy();
        sp_retain.setRetainSizeWhenHidden(true);
        deleteBook -> setSizePolicy(sp_retain);
        deleteBook -> setStyleSheet("background-color:#CED2BA ; color: rgb(255, 255, 255);");
      }


      //end of delete buttonn


    }


    ///*USER ACCOUNT TABLE-----------------------------------------------------------------------------------------------------------

    for(int j = 0; j < accountArray.length(); j++){

    //user ID numbers
    // adds book info columns 1,2 + 3 into a string and displays it in a text browser box
    QTextBrowser * thisID = new QTextBrowser(this);
    thisID -> setMaximumHeight(125);
    thisID -> setText(
      "ID: " + accountArray.at(j).at(3)
    );
    allUserIDAdmin.append(thisID);
    ui -> userIDList -> addWidget(allUserIDAdmin[j]);


    //user names
    // adds book info columns 1,2 + 3 into a string and displays it in a text browser box
    QTextBrowser * thisUser = new QTextBrowser(this);
    thisUser -> setMaximumHeight(125);
    thisUser -> setText(
      "Username: " + accountArray.at(j).at(0) + "\n"
    );
    allUserNameAdmin.append(thisUser);
    ui -> usernameList -> addWidget(allUserNameAdmin[j]);


    //user passwords
    // adds book info columns 1,2 + 3 into a string and displays it in a text browser box
    QTextBrowser * thisPass = new QTextBrowser(this);
    thisPass -> setMaximumHeight(125);
    thisPass -> setText(
      "Password: " + accountArray.at(j).at(1) + "\n"
    );
    allUserPassAdmin.append(thisPass);
    ui -> userPasswordList -> addWidget(allUserPassAdmin[j]);


    //add edit user button
    //cast i into string
    QString iterationAsStringEditUser = QString::number(j);
    QPushButton * editUser = new QPushButton("Edit User: " + accountArray.at(j).at(3));
    editUser -> setProperty("bookIndex", j);
    editUser -> setStyleSheet("background-color:#858D6F; color: rgb(255, 255, 255);");




    connect(editUser, SIGNAL(clicked()), this, SLOT(editUserClicked()));

    editUserButtonVectorAdmin.append(editUser);
    ui -> userEditButtons -> addWidget(editUserButtonVectorAdmin[j]);
    if (accountArray.at(j).at(2).toInt() <= 0) {
      QSizePolicy sp_retain = editUser -> sizePolicy();
      sp_retain.setRetainSizeWhenHidden(true);
      editUser -> setSizePolicy(sp_retain);
      editUser -> setStyleSheet("background-color:#CED2BA ; color: rgb(255, 255, 255);");
    }


    //end of edit button


    //add edit delete button
    //cast i into string
    QString iterationAsStringDeleteUser = QString::number(j);
    QPushButton * deleteUser = new QPushButton("Delete User: " + accountArray.at(j).at(3));
    deleteUser -> setProperty("deleteIndex", j);
    deleteUser -> setStyleSheet("background-color:#858D6F; color: rgb(255, 255, 255);");




    connect(deleteUser, SIGNAL(clicked()), this, SLOT(deleteUserClicked()));

    deleteUserButtonVectorAdmin.append(deleteUser);
    ui -> userDeleteButtons -> addWidget(deleteUserButtonVectorAdmin[j]);
    if (accountArray.at(j).at(2).toInt() <= 0) {
      QSizePolicy sp_retain = deleteUser -> sizePolicy();
      sp_retain.setRetainSizeWhenHidden(true);
      deleteUser -> setSizePolicy(sp_retain);
      deleteUser -> setStyleSheet("background-color:#CED2BA ; color: rgb(255, 255, 255);");
    }


    //end of delete button



}


};

adminWindow::~adminWindow()
{
    delete ui;
}



void adminWindow::on_pushButton_admin_logout_clicked() {

  // 🔽clears widgets and vectors to prevent memory leak & doubling up on catalogue
  for (int i = 0; i < bookCatalogue.length(); i++) {
    ui -> bookInfoVertLayout -> removeWidget(bookInformationAdmin[i]);
    ui -> bookInfoVertLayout -> removeWidget(bookCoversListAdmin[i]);
    ui -> bookInfoVertLayout -> removeWidget(editBookButtonVectorAdmin[i]);
    ui -> bookInfoVertLayout -> removeWidget(deleteBookButtonVectorAdmin[i]);
    ui -> bookQuantityVertLayout -> removeWidget(bookQuantityVertLayoutVectorAdmin[i]);
  }


  qDeleteAll(bookCoversListAdmin);
  bookCoversListAdmin.clear();
  qDeleteAll(bookInformationAdmin);
  bookInformationAdmin.clear();
  qDeleteAll(editBookButtonVectorAdmin);
  editBookButtonVectorAdmin.clear();
  qDeleteAll(deleteBookButtonVectorAdmin);
  deleteBookButtonVectorAdmin.clear();
  qDeleteAll(userReservedBooksVectorAdmin);
  userReservedBooksVectorAdmin.clear();
  qDeleteAll(dateReservedVectorAdmin);
  dateReservedVectorAdmin.clear();
  qDeleteAll(bookQuantityVertLayoutVectorAdmin);
  bookQuantityVertLayoutVectorAdmin.clear();
  // 🔼end of clear

  //closes sucLogin window and re-opens mainwindow fresh
  hide();
  MainWindow * mainWindow = new MainWindow();
  mainWindow -> show();
}

void adminWindow::on_bookSearchButtonAdmin_clicked() {

  QString searchedText = ui -> lineEdit_bookSearchText -> text();

  //Code block needed to clear dashboard widgets so that it can repopulate it with changes (preventing double ups on previous items)
  //clears widgets and vectors to prevent memory leak & doubling up on catalogue
  for (int i = 0; i < bookCatalogue.length(); i++) {
    ui -> bookInfoVertLayout -> removeWidget(bookInformationAdmin[i]);
    ui -> bookCoverVertLayout -> removeWidget(bookCoversListAdmin[i]);
    ui -> bookEditVertLayout -> removeWidget(editBookButtonVectorAdmin[i]);
    ui -> bookDeleteVertLayout -> removeWidget(deleteBookButtonVectorAdmin[i]);

    ui -> bookQuantityVertLayout -> removeWidget(bookQuantityVertLayoutVectorAdmin[i]);
  }

  qDeleteAll(bookCoversListAdmin);
  bookCoversListAdmin.clear();
  qDeleteAll(bookInformationAdmin);
  bookInformationAdmin.clear();
  qDeleteAll(editBookButtonVectorAdmin);
  editBookButtonVectorAdmin.clear();
  qDeleteAll(deleteBookButtonVectorAdmin);
  deleteBookButtonVectorAdmin.clear();

  qDeleteAll(bookQuantityVertLayoutVectorAdmin);
  bookQuantityVertLayoutVectorAdmin.clear();
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
    bookInformationAdmin.append(info);

    //Book Quantity label
    QLabel * bookQuantityLabel = new QLabel(this);
    bookQuantityLabel -> setText("Quantity:\n" + bookCatalogue.at(i).at(5));
    bookQuantityLabel -> setProperty("bookIndex", i);
    bookQuantityVertLayoutVectorAdmin.append(bookQuantityLabel);

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
    bookCoversListAdmin.append(labelPic);

    //edit book buttons which populates vector with book title *** search version
    //cast i as string
    QString iterationAsString = QString::number(i);
    QPushButton * editBook = new QPushButton("Edit book \n" + bookCatalogue.at(i).at(1) );

    editBook -> setProperty("bookIndex", i);//------------------------------------------------------------------------------------------------------------------------------------

    connect(editBook, SIGNAL(clicked()), this, SLOT(editBookClicked()));
    editBookButtonVectorAdmin.append(editBook);

    //hide reserve button in quantity = 0
    if (bookCatalogue.at(i).at(5).toInt() < 1) {
      QSizePolicy sp_retain = editBook -> sizePolicy();
      sp_retain.setRetainSizeWhenHidden(true);
      editBook -> setSizePolicy(sp_retain);
      editBook -> setStyleSheet("background-color: #CED2BA ; color: rgb(255, 255, 255);");
    }
    //edit button section over

    //delete book buttons which populates vector with book title *** search version
    //cast i as string
    QString iterationAsStringDel = QString::number(i);
    QPushButton * deleteBook = new QPushButton("delete book \n" + bookCatalogue.at(i).at(1) );

    deleteBook -> setProperty("bookIndex", i);//------------------------------------------------------------------------------------------------------------------------------------

    connect(deleteBook, SIGNAL(clicked()), this, SLOT(deleteBookClicked()));
    deleteBookButtonVectorAdmin.append(deleteBook);

    //hide reserve button in quantity = 0
    if (bookCatalogue.at(i).at(5).toInt() < 1) {
      QSizePolicy sp_retain = deleteBook -> sizePolicy();
      sp_retain.setRetainSizeWhenHidden(true);
      deleteBook -> setSizePolicy(sp_retain);
      deleteBook -> setStyleSheet("background-color: #CED2BA ; color: rgb(255, 255, 255);");
    }
    //delete button section over




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
      ui -> bookCoverVertLayout -> addWidget(bookCoversListAdmin[i]);
      ui -> bookInfoVertLayout -> addWidget(bookInformationAdmin[i]);
      ui -> bookDeleteVertLayout -> addWidget(deleteBookButtonVectorAdmin[i]);
      ui -> bookEditVertLayout -> addWidget(editBookButtonVectorAdmin[i]);
      ui -> bookQuantityVertLayout -> addWidget(bookQuantityVertLayoutVectorAdmin[i]);
    }



  }




}



void adminWindow::editUserClicked() { // add functionality

  // displays a message box with 2 options

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Edit popup", "Edit this user",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
      qDebug() << "Yes was clicked";
    } else {
      qDebug() << "No was clicked";
    }

};

void adminWindow::deleteUserClicked() { // add functionality
    QPushButton * pButton = qobject_cast < QPushButton * > (sender());


  // displays a message box with 2 options

    QMessageBox::StandardButton reply;
    reply = QMessageBox::warning(this, "Edit popup", "Delete this user?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
      qDebug() << "Yes was clicked";

     int userToDelete = pButton ->  property("deleteUser").toInt();
     qDebug() << property("deleteUser").toString();
     QString nilString = "nil";
      //update reserved books file with andy changes
      QVector < QString > changes;
      QString oldFileToDelete = "accountInformation.csv";
      // creates  file with namenew_...
      QString newFileWithEdits = "accountInformation_changed";
      QString newFileWithEdits_csv = "accountInformation_changed.csv";
      QFile file(newFileWithEdits);

      for (int i = 0; i < accountArray.length(); i++) {
        for (int j = 0; j < 4; j++) {
           if(i == userToDelete && j == 0){
               changes.append(nilString);
           }else if(i == userToDelete && j == 1){
               changes.append(nilString);
           } else{
          changes.append(accountArray.at(i).at(j));
           }
        }
        fManager.WriteFile(newFileWithEdits, changes);
        changes.clear();
      }

      QFile::remove(oldFileToDelete);
      QFile::rename(newFileWithEdits_csv, oldFileToDelete);



    } else {
      qDebug() << "No was clicked";
    }





};

void adminWindow::on_addUserButton_clicked() { // add functionality

  // displays a message box with 2 options

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Add popup", "Add a new user?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
      qDebug() << "Yes was clicked";

      hide();
      adminAddUser* adminadduser = new adminAddUser();
      adminadduser -> show();
      close();
    } else {
      qDebug() << "No was clicked";
    }

};

void adminWindow::editBookClicked() { // add functionality

  // displays a message box with 2 options

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Edit popup", "Edit this book?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
      qDebug() << "Yes was clicked";
    } else {
      qDebug() << "No was clicked";
    }

};

void adminWindow::deleteBookClicked() { // add functionality

  // displays a message box with 2 options

    QMessageBox::StandardButton reply;
    reply = QMessageBox::warning(this, "Delete popup", "Delete this book?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
      qDebug() << "Yes was clicked";
    } else {
      qDebug() << "No was clicked";
    }

};



void adminWindow::on_addBookButton_clicked() { // add functionality

  // displays a message box with 2 options

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Add popup", "Add a new book?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
      qDebug() << "Yes was clicked";
    } else {
      qDebug() << "No was clicked";
    }

};


void adminWindow::bookPicClicked() {
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
