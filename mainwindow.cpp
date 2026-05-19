#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QList>
#include <QSizeGrip>
#include <QTime>
#include <QTimer>
#include <QDate>
#include <QFile>
#include <QUrl>
#include <QDesktopServices>
#include <QDebug>
#include <QStringList>
#include <QMessageBox>
#include <QSystemTrayIcon>
#include "lessons.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowIcon(QIcon("D:\\programming\\qt_projects\\design\\assets\\icon.ico"));
    QSystemTrayIcon *tray = new QSystemTrayIcon;
    tray->setIcon(QIcon("D:\\programming\\qt_projects\\design\\assets\\icon.ico"));
    tray->setToolTip("ЗумПриєднач");
    QAction *trayshow = new QAction("Показати");
    QAction *trayquit = new QAction("Зупинити");
    QMenu *traymenu = new QMenu;
    traymenu->addAction(trayshow);
    traymenu->addAction(trayquit);
    tray->setContextMenu(traymenu);
    connect(trayshow, &QAction::triggered, this, [=](){
        this->show();
    });
    connect(trayquit, &QAction::triggered, this, &QApplication::exit);


    ui->tabWidget->setTabIcon(0, QIcon("D:\\programming\\qt_projects\\design\\assets\\el.png"));
    ui->tabWidget->setTabIcon(1, QIcon("D:\\programming\\qt_projects\\design\\assets\\gk.png"));


    lessons lessons;

    timer1 = new QTimer;
    timer1->start(1000);    // 1-second timer
    timer2 = new QTimer; // 60 секунд таймер, для автомата думаю.

    // слоты
    connect(timer1, &QTimer::timeout, this, &MainWindow::TimeLabel);
    connect(timer2, &QTimer::timeout, this, &MainWindow::LessonTiming);
    connect(ui->pushButton_8, &QPushButton::clicked, this, [=](){
        this->hide();
        timer2->start(10000);

        tray->show();
    });
    connect(ui->lesbtn1, &QPushButton::clicked, this, [=](){
        qDebug() << "lesbtn1";
        lessons.ButtonJoin(ui->lesbtn1);
    });
    connect(ui->lesbtn2, &QPushButton::clicked, this, [=](){
        qDebug() << "lesbtn2";
        lessons.ButtonJoin(ui->lesbtn2);
    });
    connect(ui->lesbtn3, &QPushButton::clicked, this, [=](){
        qDebug() << "lesbtn3";
        lessons.ButtonJoin(ui->lesbtn3);
    });
    connect(ui->lesbtn4, &QPushButton::clicked, this, [=](){
        qDebug() << "lesbtn4";
        lessons.ButtonJoin(ui->lesbtn4);
    });
    connect(ui->actionabout, &QAction::triggered, this, &MainWindow::AboutBox);
    QFile file("zametka.txt");
    if (file.exists()){
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
            qDebug() << "file exists";
            QTextStream in(&file);
            QStringList lines;
            while (!in.atEnd()) {
                QString line = in.readLine();
                lines << line;  // добавляем строку в список
            }
            ui->textEdit->setText(lines.join("\n"));
            file.close();
        }
    }
    else {
        qDebug() << "file doesn't exist";
    }
    QFile schedule("https://raw.githubusercontent.com/qwxkp/qwxkp.github.io/refs/heads/main/ZoomJoiner/schedule.txt");
    if (file.exists()){
    if(schedule.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream in (&schedule);
        QString line = in.readLine();
        ui->label_schedule->setText(line);
        schedule.close();
    }
    }


    QMap<QString, QPushButton*> buttons;
    buttons["lesbtn1"] = ui->lesbtn1;
    buttons["lesbtn2"] = ui->lesbtn2;
    buttons["lesbtn3"] = ui->lesbtn3;
    buttons["lesbtn4"] = ui->lesbtn4;

    lessons.ApplyLesButtons(buttons);
    lessons.ScheduleShow(ui->label_schedule);

}
// вещи связанные со временем
void MainWindow::TimeLabel() {
    QTime time = QTime::currentTime();
    ui->timelabel->setText(time.toString("hh:mm"));
}

void MainWindow::LessonTiming(){
    qDebug() << "the service has started";
    QTime time = QTime::currentTime();
    if (time.hour() == 11 && time.minute() == 54){
        QDesktopServices::openUrl(QUrl("https://x.com"));
    }
}


/// обьявление моей функции для того чтобы менять цвет активной кнопки
/// это моя функция, я её записал в заголовочном файле
void MainWindow::setActiveButton(QPushButton *activebutton){
QList<QPushButton*> menubuttons {ui->pushButton_2, ui->pushButton_3, ui->pushButton_6, ui->pushButton_7};//типо как лист только qt
    for (auto *pushButton : menubuttons){
        pushButton->setStyleSheet("background-color: #5c5c5c;");
    };
    activebutton->setStyleSheet("background-color: #ff4747;");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    setActiveButton(ui->pushButton_2);
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_3_clicked()
{
    setActiveButton(ui->pushButton_3);
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_7_clicked()
{
    setActiveButton(ui->pushButton_7);
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_6_clicked()
{
    setActiveButton(ui->pushButton_6);
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_MainLabel_2_linkActivated(const QString &link)
{
    QDesktopServices::openUrl(QUrl("https://qwxkp.github.io/ZoomJoiner/ua"));
}

void MainWindow::LessonJoin(){

    //QDesktopServices::openUrl(QUrl("https://x.com/"));
}

void MainWindow::on_actionSave_Notes_triggered()
{
    QFile file("zametka.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)){
        QTextStream out(&file);
        out << ui->textEdit->toPlainText();
        file.close();
    }
    QMessageBox msgbox;
    msgbox.setText("Збережено!");
    msgbox.setInformativeText("Успішно Збережено!");
    msgbox.setIcon(QMessageBox::Information);
    msgbox.setDefaultButton(QMessageBox::Ok);
    msgbox.exec();
}

void MainWindow::AboutBox(){
    ui->stackedWidget->setCurrentIndex(0);
    QMessageBox msgbox;
    msgbox.setText("Відкрито");
    msgbox.setWindowTitle("Про цю программу");
    msgbox.setIcon(QMessageBox::Information);
    msgbox.setInformativeText("Можеш подивитись!");
    msgbox.exec();
};

void MainWindow::on_label_2_linkActivated(const QString &link)
{
    QDesktopServices::openUrl(QUrl("https://t.me/jesstheworld"));
}

