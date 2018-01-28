/********************************************************************************
** Form generated from reading UI file 'student_repay.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_REPAY_H
#define UI_STUDENT_REPAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_student_repay
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QFrame *frame_2;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout;
    QPushButton *btnPersonal;
    QPushButton *btnInformationchange;
    QPushButton *btnSearchbook;
    QPushButton *btnLogout;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_6;
    QLineEdit *lineEdit;
    QLineEdit *etRepay;
    QPushButton *btnRepay;

    void setupUi(QWidget *student_repay)
    {
        if (student_repay->objectName().isEmpty())
            student_repay->setObjectName(QStringLiteral("student_repay"));
        student_repay->resize(980, 722);
        horizontalLayout = new QHBoxLayout(student_repay);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        frame = new QFrame(student_repay);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(300, 700));
        frame->setStyleSheet(QLatin1String("\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(51, 153, 255,1), stop:1 rgba(52, 246, 177,1));"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(70, 30, 171, 176));
        frame_2->setMinimumSize(QSize(0, 0));
        frame_2->setBaseSize(QSize(0, 100));
        frame_2->setStyleSheet(QLatin1String("image: url(:/Library/images/logo2.png);\n"
"background:transparent;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_8 = new QFrame(frame);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setGeometry(QRect(0, 230, 301, 371));
        frame_8->setStyleSheet(QStringLiteral("background:transparent;"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_8);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(7);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        btnPersonal = new QPushButton(frame_8);
        btnPersonal->setObjectName(QStringLiteral("btnPersonal"));
        btnPersonal->setMinimumSize(QSize(0, 100));
        btnPersonal->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
"background:transparent;\n"
"cursor:pointer;"));

        verticalLayout->addWidget(btnPersonal);

        btnInformationchange = new QPushButton(frame_8);
        btnInformationchange->setObjectName(QStringLiteral("btnInformationchange"));
        btnInformationchange->setMinimumSize(QSize(0, 100));
        btnInformationchange->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
"background:transparent;\n"
"cursor:pointer;\n"
"background-color:rgba(255,255,255,0.4);"));

        verticalLayout->addWidget(btnInformationchange);

        btnSearchbook = new QPushButton(frame_8);
        btnSearchbook->setObjectName(QStringLiteral("btnSearchbook"));
        btnSearchbook->setMinimumSize(QSize(0, 100));
        btnSearchbook->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
"background:transparent;\n"
"cursor:pointer;"));

        verticalLayout->addWidget(btnSearchbook);

        btnLogout = new QPushButton(frame_8);
        btnLogout->setObjectName(QStringLiteral("btnLogout"));
        btnLogout->setMinimumSize(QSize(0, 100));
        btnLogout->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
"background:transparent;"));

        verticalLayout->addWidget(btnLogout);


        verticalLayout_6->addLayout(verticalLayout);


        horizontalLayout->addWidget(frame);

        frame_3 = new QFrame(student_repay);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setStyleSheet(QStringLiteral("background:white;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy1);
        frame_4->setMaximumSize(QSize(16777215, 70));
        frame_4->setStyleSheet(QString::fromUtf8("border:1px solid #cccccc;\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-top:0;\n"
"border-left:0;\n"
"border-right:0;\n"
"margin-left:20px;\n"
"margin-right:20px;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(22, 10, 131, 51));
        pushButton->setStyleSheet(QString::fromUtf8("border:none;\n"
"color:#CCCCCC;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_2 = new QPushButton(frame_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 10, 141, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"color:#CCCCCC;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";border:none;"));
        pushButton_3 = new QPushButton(frame_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(310, 10, 141, 51));
        pushButton_3->setStyleSheet(QStringLiteral("border:none;"));

        verticalLayout_2->addWidget(frame_4);

        frame_5 = new QFrame(frame_3);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_5);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        frame_6 = new QFrame(frame_5);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(frame_6);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(30, 10, 101, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        etRepay = new QLineEdit(frame_6);
        etRepay->setObjectName(QStringLiteral("etRepay"));
        etRepay->setGeometry(QRect(130, 10, 171, 31));
        etRepay->setStyleSheet(QString::fromUtf8("border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));

        verticalLayout_3->addWidget(frame_6);

        btnRepay = new QPushButton(frame_5);
        btnRepay->setObjectName(QStringLiteral("btnRepay"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnRepay->sizePolicy().hasHeightForWidth());
        btnRepay->setSizePolicy(sizePolicy2);
        btnRepay->setStyleSheet(QString::fromUtf8("color:white;\n"
"border:none;\n"
"font-size:20px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(51, 153, 255,1), stop:1 rgba(52, 246, 177,1));\n"
"padding-top:5;\n"
"padding-bottom:5;"));

        verticalLayout_3->addWidget(btnRepay);


        verticalLayout_2->addWidget(frame_5);


        horizontalLayout->addWidget(frame_3);


        retranslateUi(student_repay);

        QMetaObject::connectSlotsByName(student_repay);
    } // setupUi

    void retranslateUi(QWidget *student_repay)
    {
        student_repay->setWindowTitle(QApplication::translate("student_repay", "student_repay", Q_NULLPTR));
        btnPersonal->setText(QApplication::translate("student_repay", "\344\270\252\344\272\272\344\270\255\345\277\203", Q_NULLPTR));
        btnInformationchange->setText(QApplication::translate("student_repay", "\344\277\241\346\201\257\344\277\256\346\224\271", Q_NULLPTR));
        btnSearchbook->setText(QApplication::translate("student_repay", "\345\233\276\344\271\246\346\237\245\350\257\242", Q_NULLPTR));
        btnLogout->setText(QApplication::translate("student_repay", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
        pushButton->setText(QApplication::translate("student_repay", "\344\277\241\346\201\257\344\277\256\346\224\271", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("student_repay", "\345\257\206\347\240\201\344\277\256\346\224\271", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("student_repay", "\346\224\257\344\273\230\346\254\240\346\254\276", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("student_repay", "\346\254\240\346\254\276\346\200\273\351\242\235\357\274\232", Q_NULLPTR));
        btnRepay->setText(QApplication::translate("student_repay", "\344\270\200\351\224\256\350\277\230\346\254\276", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class student_repay: public Ui_student_repay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_REPAY_H
