#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "wordoperator.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    WordOperator* pWord = new WordOperator(this, R"(C:\Users\ace.wang\Documents\Ace\Code\BatchWord\doc\srcword\IncrediBuild - Windows - POC Guide& - 厦门铃盛.docx)");
    if(pWord)
    {
        pWord->AddWaterMark(R"(C:\Users\ace.wang\Documents\Ace\Code\BatchWord\doc\test\wm-1.png)");
    }
}
