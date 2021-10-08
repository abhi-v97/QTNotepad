#include "mainwindow.h"
#include "ui_mainwindow.h"




Notepad::Notepad(QWidget *parent):
// Call the QMainWindow constructor
QMainWindow(parent),

// Create the UI class and assign it to the ui member
ui(new Ui::Notepad)
{
// Setup the UI
ui->setupUi(this);

// Have the textedit widget take up the whole window
this->setCentralWidget(ui->textEdit);
}

Notepad::~Notepad()
{
    delete ui;
}
