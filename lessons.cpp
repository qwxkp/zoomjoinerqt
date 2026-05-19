#include "lessons.h"
#include <QDate>
#include <QDebug>
#include <QDesktopServices>

lessons::lessons() {
    QDate qdate = QDate::currentDate();
    int week = qdate.weekNumber();
    qDebug()<<week;
    if(week % 2 == 1){
        schedule["Monday"]["lesbtn1"] = "Вишмат";
        schedule["Monday"]["lesbtn2"] = "день1пара2";
        schedule["Monday"]["lesbtn3"] = "день1пара3";
        schedule["Monday"]["lesbtn4"] = "день1пара4";

        schedule["Tuesday"]["lesbtn1"] = "Вишмат";
        schedule["Tuesday"]["lesbtn2"] = "Джава";
        schedule["Tuesday"]["lesbtn3"] = "Что-то другое";
        schedule["Tuesday"]["lesbtn4"] = "ПараХЗ";

        schedule["Wednesday"]["lesbtn1"] = "день3пара1";
        schedule["Wednesday"]["lesbtn2"] = "день3пара2";
        schedule["Wednesday"]["lesbtn3"] = "день3пара3";
        schedule["Wednesday"]["lesbtn4"] = "день3пара4";

        schedule["Thursday"]["lesbtn1"] = "день4пара1";
        schedule["Thursday"]["lesbtn2"] = "Вишмат";
        schedule["Thursday"]["lesbtn3"] = "день4пара3";
        schedule["Thursday"]["lesbtn4"] = "день4пара4";

        schedule["Friday"]["lesbtn1"] = "Вишмат";
        schedule["Friday"]["lesbtn2"] = "день5пара2";
        schedule["Friday"]["lesbtn3"] = "день5пара3";
        schedule["Friday"]["lesbtn4"] = "день5пара4";
    }
    else {
        qDebug()<<"week is odd";
    }
    links["Вишмат"] = "https://duckduckgo.com/?t=ffab&q=math";
    links["Джава"] = "https://duckduckgo.com/?t=ffab&q=java";
    links["ПараХЗ"] = "https://duckduckgo.com/?t=ffab&q=niconico";
    links["щось інше"] = "https://duckduckgo.com/?t=ffab&q=random";
}

void lessons::ApplyLesButtons(QMap<QString, QPushButton*> buttons){
    QString today = QDate::currentDate().toString("dddd");
    QMap <QString, QString> todaySchedule = schedule.value(today);
    for (const QString &key : buttons.keys()){
        if(todaySchedule.contains(key)){
            buttons[key]->setText(todaySchedule[key]);
        }
        else {
            buttons[key]->setText("Немає пари.");
        }
    }
}
void lessons::ScheduleShow(QLabel* label){
    label->setWordWrap(true);         // включить перенос
    label->setTextInteractionFlags(Qt::TextSelectableByMouse); // чтобы можно было копировать
    label->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
    QLocale ukrainian(QLocale::Ukrainian, QLocale::Ukraine);
    QString today = QDate::currentDate().toString("dddd");
    QDate ref = QDate::currentDate();
    QString result = "Розклад на "+ukrainian.toString(ref, "dddd")+":\n";
        QMap<QString, QString> buttons = schedule[today];
        for (const QString &btn : buttons.keys()){
            QString subject = buttons[btn];
            result+= subject+"\n";
        }
        label->setText(result);
}

void lessons::ButtonJoin(QPushButton *button) const{
    QString today = QDate::currentDate().toString("dddd");
    QMap<QString, QString> buttons = schedule[today];
    for (const QString &les : links.keys()){
        if (button->text() == les){
            QDesktopServices::openUrl(QUrl(links[les]));
        }
    }
}

