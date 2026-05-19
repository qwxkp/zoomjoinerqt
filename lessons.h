#ifndef LESSONS_H
#define LESSONS_H
#include <QString>
#include <QMap>
#include <QPushButton>
#include <QDate>
#include <QLabel>

class lessons
{
private:
    QMap<QString, QMap<QString, QString>> schedule;
    QMap<QString, QString> links;
public:
    lessons();
    void ApplyLesButtons(QMap<QString, QPushButton*> buttons);
    void ScheduleShow(QLabel* label);
    void ButtonJoin(QPushButton *button) const;
};

#endif // LESSONS_H
