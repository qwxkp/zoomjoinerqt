#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_MainLabel_2_linkActivated(const QString &link);

    void on_actionSave_Notes_triggered();

    void TimeLabel(); // real time label

    void LessonTiming(); // автоподключение

    void LessonJoin(); // присоединение к парам
    void on_label_2_linkActivated(const QString &link);

    void AboutBox();

private:
    Ui::MainWindow *ui;
    void setActiveButton(QPushButton *activeButton); // моя функция
    QTimer *timer1, *timer2;
};
#endif // MAINWINDOW_H
