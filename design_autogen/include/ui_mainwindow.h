/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave_Notes;
    QAction *actionabout;
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *MainLabel;
    QLabel *MainLabel_2;
    QWidget *page_2;
    QPushButton *lesbtn1;
    QPushButton *pushButton_8;
    QPushButton *lesbtn2;
    QPushButton *lesbtn3;
    QPushButton *lesbtn4;
    QFrame *frame_2;
    QLabel *label_schedule;
    QLabel *label_4;
    QWidget *page_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_9;
    QPushButton *pushButton_14;
    QWidget *tab_2;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_15;
    QPushButton *pushButton_13;
    QLabel *label_3;
    QWidget *page_4;
    QTextEdit *textEdit;
    QCalendarWidget *calendarWidget;
    QLabel *label_5;
    QWidget *page_5;
    QLabel *label;
    QLabel *label_2;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_6;
    QLabel *timelabel;
    QFrame *frame_4;
    QMenuBar *menubar;
    QMenu *menuOptions;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 470);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 470));
        MainWindow->setMaximumSize(QSize(800, 470));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(39, 39, 39, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(58, 58, 58, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(48, 48, 48, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(19, 19, 19, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(26, 26, 26, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush7(QColor(170, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Link, brush7);
        QBrush brush8(QColor(127, 0, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::LinkVisited, brush8);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush9(QColor(255, 255, 220, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush10(QColor(255, 255, 255, 127));
        brush10.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        QBrush brush11(QColor(19, 19, 19, 127));
        brush11.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        QBrush brush12(QColor(27, 27, 27, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush12);
        MainWindow->setPalette(palette);
        MainWindow->setContextMenuPolicy(Qt::ContextMenuPolicy::NoContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../Downloads/New Project (1).ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setTabShape(QTabWidget::TabShape::Rounded);
        actionSave_Notes = new QAction(MainWindow);
        actionSave_Notes->setObjectName("actionSave_Notes");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSave));
        actionSave_Notes->setIcon(icon1);
        actionabout = new QAction(MainWindow);
        actionabout->setObjectName("actionabout");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::HelpAbout));
        actionabout->setIcon(icon2);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(140, 0, 661, 411));
        page = new QWidget();
        page->setObjectName("page");
        MainLabel = new QLabel(page);
        MainLabel->setObjectName("MainLabel");
        MainLabel->setGeometry(QRect(30, 10, 601, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sans Serif Collection")});
        font.setPointSize(14);
        font.setBold(true);
        MainLabel->setFont(font);
        MainLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainLabel_2 = new QLabel(page);
        MainLabel_2->setObjectName("MainLabel_2");
        MainLabel_2->setGeometry(QRect(30, 60, 591, 321));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sans Serif Collection")});
        font1.setPointSize(11);
        MainLabel_2->setFont(font1);
        MainLabel_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        lesbtn1 = new QPushButton(page_2);
        lesbtn1->setObjectName("lesbtn1");
        lesbtn1->setGeometry(QRect(80, 290, 101, 51));
        lesbtn1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #5c5c5c;\n"
"    border-radius: 10px;\n"
"    color: white;\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: #ff4747;\n"
"\n"
"}\n"
""));
        pushButton_8 = new QPushButton(page_2);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(30, 370, 130, 41));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #5c5c5c;\n"
"    border-radius: 10px;\n"
"    color: white;\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: #ff4747;\n"
"\n"
"}\n"
""));
        lesbtn2 = new QPushButton(page_2);
        lesbtn2->setObjectName("lesbtn2");
        lesbtn2->setGeometry(QRect(200, 290, 101, 51));
        lesbtn2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #5c5c5c;\n"
"    border-radius: 10px;\n"
"    color: white;\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: #ff4747;\n"
"\n"
"}\n"
""));
        lesbtn3 = new QPushButton(page_2);
        lesbtn3->setObjectName("lesbtn3");
        lesbtn3->setGeometry(QRect(330, 290, 101, 51));
        lesbtn3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #5c5c5c;\n"
"    border-radius: 10px;\n"
"    color: white;\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: #ff4747;\n"
"\n"
"}\n"
""));
        lesbtn4 = new QPushButton(page_2);
        lesbtn4->setObjectName("lesbtn4");
        lesbtn4->setGeometry(QRect(460, 290, 101, 51));
        lesbtn4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #5c5c5c;\n"
"    border-radius: 10px;\n"
"    color: white;\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: #ff4747;\n"
"\n"
"}\n"
""));
        frame_2 = new QFrame(page_2);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(30, 70, 191, 200));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label_schedule = new QLabel(frame_2);
        label_schedule->setObjectName("label_schedule");
        label_schedule->setGeometry(QRect(10, 10, 181, 201));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sans Serif Collection")});
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setItalic(false);
        label_schedule->setFont(font2);
        label_schedule->setTextFormat(Qt::TextFormat::AutoText);
        label_schedule->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        label_schedule->setWordWrap(true);
        label_4 = new QLabel(page_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 10, 601, 41));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        tabWidget = new QTabWidget(page_3);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(30, 60, 601, 330));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Sans Serif Collection")});
        font3.setBold(true);
        font3.setItalic(false);
        tabWidget->setFont(font3);
        tab = new QWidget();
        tab->setObjectName("tab");
        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(10, 60, 131, 40));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #5c5c5c;\n"
"    border-radius: 10px;\n"
"    color: white;\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: #ff4747;\n"
"\n"
"}\n"
""));
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(10, 110, 131, 40));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #5c5c5c;\n"
"    border-radius: 10px;\n"
"    color: white;\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: #ff4747;\n"
"\n"
"}\n"
""));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 151, 40));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #5c5c5c;\n"
"    border-radius: 10px;\n"
"    color: white;\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: #ff4747;\n"
"\n"
"}\n"
""));
        pushButton_9 = new QPushButton(tab);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(10, 220, 151, 50));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #5c5c5c;\n"
"    border-radius: 10px;\n"
"    color: white;\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: #ff4747;\n"
"\n"
"}\n"
""));
        pushButton_14 = new QPushButton(tab);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(10, 160, 131, 40));
        pushButton_14->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #5c5c5c;\n"
"    border-radius: 10px;\n"
"    color: white;\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: #ff4747;\n"
"\n"
"}\n"
""));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        pushButton_10 = new QPushButton(tab_2);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(10, 10, 130, 40));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #5c5c5c;\n"
"    border-radius: 10px;\n"
"    color: white;\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: #ff4747;\n"
"\n"
"}\n"
""));
        pushButton_11 = new QPushButton(tab_2);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(10, 60, 131, 40));
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #5c5c5c;\n"
"    border-radius: 10px;\n"
"    color: white;\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: #ff4747;\n"
"\n"
"}\n"
""));
        pushButton_12 = new QPushButton(tab_2);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(10, 220, 151, 50));
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #5c5c5c;\n"
"    border-radius: 10px;\n"
"    color: white;\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: #ff4747;\n"
"\n"
"}\n"
""));
        pushButton_15 = new QPushButton(tab_2);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(10, 160, 131, 40));
        pushButton_15->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #5c5c5c;\n"
"    border-radius: 10px;\n"
"    color: white;\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: #ff4747;\n"
"\n"
"}\n"
""));
        pushButton_13 = new QPushButton(tab_2);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(10, 110, 131, 40));
        pushButton_13->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #5c5c5c;\n"
"    border-radius: 10px;\n"
"    color: white;\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: #ff4747;\n"
"\n"
"}\n"
""));
        tabWidget->addTab(tab_2, QString());
        label_3 = new QLabel(page_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 10, 601, 41));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        textEdit = new QTextEdit(page_4);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(30, 70, 601, 201));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Sans Serif Collection")});
        font4.setPointSize(10);
        font4.setBold(true);
        textEdit->setFont(font4);
        calendarWidget = new QCalendarWidget(page_4);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(380, 280, 251, 121));
        label_5 = new QLabel(page_4);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 10, 601, 41));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        label = new QLabel(page_5);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 10, 601, 41));
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(page_5);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 70, 601, 211));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        stackedWidget->addWidget(page_5);
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 141, 451));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"background-color: #333333;\n"
"\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 142, 421));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(140, 60));
        pushButton_2->setMaximumSize(QSize(140, 60));
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::CallStart));
        pushButton_2->setIcon(icon3);

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(140, 60));
        pushButton_3->setMaximumSize(QSize(140, 60));
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::AddressBookNew));
        pushButton_3->setIcon(icon4);

        verticalLayout->addWidget(pushButton_3);

        pushButton_7 = new QPushButton(verticalLayoutWidget);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setMinimumSize(QSize(140, 60));
        pushButton_7->setMaximumSize(QSize(140, 60));
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::MailMessageNew));
        pushButton_7->setIcon(icon5);

        verticalLayout->addWidget(pushButton_7);

        verticalSpacer = new QSpacerItem(20, 140, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        pushButton_6 = new QPushButton(verticalLayoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(140, 60));
        pushButton_6->setMaximumSize(QSize(140, 60));
        QIcon icon6(QIcon::fromTheme(QIcon::ThemeIcon::ContactNew));
        pushButton_6->setIcon(icon6);

        verticalLayout->addWidget(pushButton_6);

        timelabel = new QLabel(centralwidget);
        timelabel->setObjectName("timelabel");
        timelabel->setGeometry(QRect(750, 410, 51, 21));
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(false);
        timelabel->setFont(font5);
        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(170, 50, 601, 2));
        sizePolicy.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy);
        frame_4->setMinimumSize(QSize(0, 2));
        frame_4->setMaximumSize(QSize(16777215, 2));
        frame_4->setStyleSheet(QString::fromUtf8("frame->setStyleSheet(\"color: white; background-color: white; max-height: 3px;\");"));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName("menuOptions");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuOptions->menuAction());
        menuOptions->addAction(actionSave_Notes);
        menuOptions->addAction(actionabout);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\227\321\203\320\274\320\237\321\200\320\270\321\224\320\264\320\275\320\260\321\207", nullptr));
        actionSave_Notes->setText(QCoreApplication::translate("MainWindow", "\320\227\320\261\320\265\321\200\320\265\320\263\321\202\320\270 \320\227\320\260\320\274\321\226\321\202\320\272\320\270", nullptr));
        actionabout->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276 \320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203", nullptr));
        MainLabel->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\262\321\226\321\202. \320\246\320\265 \320\274\320\276\321\217 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\260.", nullptr));
        MainLabel_2->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif Collection'; font-size:11pt;\">\320\246\320\265 \320\263\320\276\320\273\320\276\320\262\320\275\320\260 \321\201\321\202\320\276\321\200\321\226\320\275\320\272\320\260. \320\233\321\226\320\262\320\276\321\200\321\203\321\207 \320\274\320\265\320\275\321\216. \320\237\321\200\320\260\320\262\320\276\321\200\321\203\321\207 \320\267\320\275\320\270\320\267\321"
                        "\203 \321\207\320\260\321\201. \320\242\321\217\320\266\320\272\320\276 \321\206\320\265 \321\200\320\276\320\261\320\270\321\202\320\270 \320\261\321\203\320\273\320\276.<br />\320\220\320\273\320\265 \321\206\321\226\320\272\320\260\320\262\320\276.<br />\320\237\320\276\320\277\320\265\321\200\320\265\320\264\320\275\321\226\320\271 \320\277\321\200\320\276\320\265\320\272\321\202: </span><a href=\"https://qwxkp.github.io/ZoomJoiner/ua\"><span style=\" font-family:'Sans Serif Collection'; font-size:11pt; text-decoration: underline; color:#007af4;\">https://qwxkp.github.io/zoomjoiner/ua</span></a></p></body></html>", nullptr));
        lesbtn1->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276-\320\277\321\226\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\275\321\217", nullptr));
        lesbtn2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260", nullptr));
        lesbtn3->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260", nullptr));
        lesbtn4->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260", nullptr));
        label_schedule->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\270", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_5->setToolTip(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202 1", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_4->setToolTip(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202 2", nullptr));
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("MainWindow", "\320\223\320\276\320\273\320\276\320\262\320\275\320\260 \320\241\321\202\320\276\321\200\321\226\320\275\320\272\320\260 \320\204\320\273\321\226", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\223\320\276\320\273\320\276\320\262\320\275\320\260 \320\241\321\202\320\276\321\200\321\226\320\275\320\272\320\260", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_9->setToolTip(QCoreApplication::translate("MainWindow", "\320\221\320\276\321\200\320\263\320\270", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "\320\221\320\276\321\200\320\263\320\270", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_14->setToolTip(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\204\320\273\321\214", nullptr));
#if QT_CONFIG(whatsthis)
        tabWidget->setTabWhatsThis(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "gfddfgdf", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        pushButton_10->setToolTip(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202 1", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_11->setToolTip(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202 1", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_12->setToolTip(QCoreApplication::translate("MainWindow", "\320\221\320\276\321\200\320\263\320\270", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "\320\221\320\276\321\200\320\263\320\270", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_15->setToolTip(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202 2", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_13->setToolTip(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\322\220\320\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\321\201\321\203\321\200\321\201\320\270", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\274\321\226\321\202\320\272\320\270", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\204 \320\237\320\270\321\202\320\260\320\275\320\275\321\217?", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\257\320\272\321\211\320\276 \320\262 \321\202\320\265\320\261\320\265 \321\224 \320\277\320\270\321\202\320\260\320\275\320\275\321\217, \321\217\320\272\320\270\321\201\321\214 \320\277\320\276\321\200\320\260\320\264\320\270 \321\211\320\276\320\264\320\276 \320\274\320\276\321\224\321\227 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\270<br/>\320\235\320\260 \321\202\320\265\320\273\320\265\320\263\321\200\320\260\320\274 \320\274\320\265\320\275\321\226 \320\277\320\270\321\210\320\270 : <a href=\"https://t.me/jesstheworld?start=\320\257 \320\277\320\276 \321\202\320\265\320\274\321\226 Zoomjoiner 2\"><span style=\" text-decoration: underline; color:#007af4;\">https://t.me/jesstheworld</span></a></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\270", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\321\201\321\203\321\200\321\201\320\270", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\274\321\226\321\202\320\272\320\270", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\320\237\321\226\320\264\321\202\321\200\320\270\320\274\320\272\320\260", nullptr));
        timelabel->setText(QString());
        menuOptions->setTitle(QCoreApplication::translate("MainWindow", "\320\236\320\277\321\206\321\226\321\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
