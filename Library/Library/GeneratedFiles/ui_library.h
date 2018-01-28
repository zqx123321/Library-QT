/********************************************************************************
** Form generated from reading UI file 'library.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARY_H
#define UI_LIBRARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LibraryClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QFrame *frame;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *etUsername;
    QSpacerItem *horizontalSpacer_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *etPassword;
    QSpacerItem *horizontalSpacer_6;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QFrame *frame_2;
    QSpacerItem *horizontalSpacer_8;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *btnLogin;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;

    void setupUi(QMainWindow *LibraryClass)
    {
        if (LibraryClass->objectName().isEmpty())
            LibraryClass->setObjectName(QStringLiteral("LibraryClass"));
        LibraryClass->setEnabled(true);
        LibraryClass->resize(1060, 850);
        LibraryClass->setMinimumSize(QSize(128, 46));
        LibraryClass->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(51, 153, 255,1), stop:1 rgba(52, 246, 177,1));"));
        centralWidget = new QWidget(LibraryClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(350, 600));
        frame->setLayoutDirection(Qt::LeftToRight);
        frame->setStyleSheet(QStringLiteral("background:white;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 200, 351, 52));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        etUsername = new QLineEdit(layoutWidget);
        etUsername->setObjectName(QStringLiteral("etUsername"));
        etUsername->setMinimumSize(QSize(300, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        etUsername->setFont(font);
        etUsername->setFocusPolicy(Qt::StrongFocus);
        etUsername->setStyleSheet(QString::fromUtf8("border:2px solid #ccc;\n"
"border-top:0px;\n"
"border-left:0px;\n"
"border-right:0px;\n"
"placeholder\357\274\232\"\347\224\250\346\210\267\345\220\215\""));
        etUsername->setEchoMode(QLineEdit::Normal);

        horizontalLayout_2->addWidget(etUsername);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        layoutWidget1 = new QWidget(frame);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 290, 351, 52));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        etPassword = new QLineEdit(layoutWidget1);
        etPassword->setObjectName(QStringLiteral("etPassword"));
        etPassword->setMinimumSize(QSize(300, 50));
        etPassword->setFont(font);
        etPassword->setFocusPolicy(Qt::StrongFocus);
        etPassword->setContextMenuPolicy(Qt::DefaultContextMenu);
        etPassword->setToolTipDuration(-1);
        etPassword->setStyleSheet(QLatin1String("border:2px solid #ccc;\n"
"border-top:0px;\n"
"border-left:0px;\n"
"border-right:0px;"));
        etPassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(etPassword);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        layoutWidget2 = new QWidget(frame);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 90, 351, 48));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        frame_2 = new QFrame(layoutWidget2);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setMinimumSize(QSize(128, 46));
        frame_2->setStyleSheet(QStringLiteral("image: url(:/Library/images/logo.png);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(frame_2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        layoutWidget3 = new QWidget(frame);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 490, 351, 52));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);

        btnLogin = new QPushButton(layoutWidget3);
        btnLogin->setObjectName(QStringLiteral("btnLogin"));
        btnLogin->setMinimumSize(QSize(300, 50));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(62);
        btnLogin->setFont(font1);
        btnLogin->setStyleSheet(QString::fromUtf8("background-color: rgb(56, 216, 198);\n"
"border\357\274\232none;\n"
"color:white;\n"
"font-weight:500;\n"
""));

        horizontalLayout_5->addWidget(btnLogin);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);


        verticalLayout->addWidget(frame);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        LibraryClass->setCentralWidget(centralWidget);

        retranslateUi(LibraryClass);

        QMetaObject::connectSlotsByName(LibraryClass);
    } // setupUi

    void retranslateUi(QMainWindow *LibraryClass)
    {
        LibraryClass->setWindowTitle(QApplication::translate("LibraryClass", "Library", Q_NULLPTR));
        etUsername->setText(QString());
#ifndef QT_NO_TOOLTIP
        etPassword->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        etPassword->setText(QString());
        btnLogin->setText(QApplication::translate("LibraryClass", "\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LibraryClass: public Ui_LibraryClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARY_H
