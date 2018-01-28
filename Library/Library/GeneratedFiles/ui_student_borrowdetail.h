/********************************************************************************
** Form generated from reading UI file 'student_borrowdetail.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_BORROWDETAIL_H
#define UI_STUDENT_BORROWDETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_student_borrowdetail
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
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *etBookNameHead;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frameBookCover;
    QLabel *lbCover;
    QFrame *frame_9;
    QLineEdit *etBookName;
    QLineEdit *etAuthorHead;
    QLineEdit *etPublishHead;
    QLineEdit *etISBNHead;
    QLineEdit *etClassifyHead;
    QLineEdit *etAuthor;
    QLineEdit *etPublish;
    QLineEdit *etISBN;
    QLineEdit *etClassify;
    QLineEdit *etClassifyHead_2;
    QLineEdit *etPublishHead_2;
    QLineEdit *etScore;
    QLineEdit *etISBNHead_2;
    QLineEdit *etCount;
    QLineEdit *etNowCount;
    QLineEdit *etDate;
    QLineEdit *etClassifyHead_3;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnReturnbook;
    QPushButton *btnBorrowagain;

    void setupUi(QWidget *student_borrowdetail)
    {
        if (student_borrowdetail->objectName().isEmpty())
            student_borrowdetail->setObjectName(QStringLiteral("student_borrowdetail"));
        student_borrowdetail->resize(1021, 722);
        horizontalLayout = new QHBoxLayout(student_borrowdetail);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        frame = new QFrame(student_borrowdetail);
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
"background:transparent;"));

        verticalLayout->addWidget(btnPersonal);

        btnInformationchange = new QPushButton(frame_8);
        btnInformationchange->setObjectName(QStringLiteral("btnInformationchange"));
        btnInformationchange->setMinimumSize(QSize(0, 100));
        btnInformationchange->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
"background:transparent;"));

        verticalLayout->addWidget(btnInformationchange);

        btnSearchbook = new QPushButton(frame_8);
        btnSearchbook->setObjectName(QStringLiteral("btnSearchbook"));
        btnSearchbook->setMinimumSize(QSize(0, 100));
        btnSearchbook->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
"background:transparent;\n"
"background-color:rgba(255,255,255,0.4);\n"
""));

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

        frame_3 = new QFrame(student_borrowdetail);
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
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(200);
        sizePolicy1.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy1);
        frame_4->setStyleSheet(QLatin1String("border:2px solid #cccccc;\n"
"border-top:0px;\n"
"border-left:0px;\n"
"border-right:0px;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_4);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        etBookNameHead = new QLineEdit(frame_4);
        etBookNameHead->setObjectName(QStringLiteral("etBookNameHead"));
        etBookNameHead->setStyleSheet(QString::fromUtf8("color:#4D4D4D;\n"
"border:none;\n"
"font-size:24px;\n"
"font-weight:500;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));

        horizontalLayout_3->addWidget(etBookNameHead);


        verticalLayout_2->addWidget(frame_4);

        frame_6 = new QFrame(frame_3);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_6);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        frameBookCover = new QFrame(frame_6);
        frameBookCover->setObjectName(QStringLiteral("frameBookCover"));
        frameBookCover->setStyleSheet(QStringLiteral(""));
        frameBookCover->setFrameShape(QFrame::StyledPanel);
        frameBookCover->setFrameShadow(QFrame::Raised);
        lbCover = new QLabel(frameBookCover);
        lbCover->setObjectName(QStringLiteral("lbCover"));
        lbCover->setGeometry(QRect(10, 100, 281, 371));

        horizontalLayout_4->addWidget(frameBookCover);

        frame_9 = new QFrame(frame_6);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        etBookName = new QLineEdit(frame_9);
        etBookName->setObjectName(QStringLiteral("etBookName"));
        etBookName->setGeometry(QRect(30, 80, 291, 21));
        etBookName->setStyleSheet(QString::fromUtf8("color:#4D4D4D;\n"
"border:none;\n"
"font-size:20px;\n"
"font-weight:500;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        etAuthorHead = new QLineEdit(frame_9);
        etAuthorHead->setObjectName(QStringLiteral("etAuthorHead"));
        etAuthorHead->setGeometry(QRect(30, 150, 80, 21));
        etAuthorHead->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        etPublishHead = new QLineEdit(frame_9);
        etPublishHead->setObjectName(QStringLiteral("etPublishHead"));
        etPublishHead->setGeometry(QRect(30, 190, 80, 21));
        etPublishHead->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        etISBNHead = new QLineEdit(frame_9);
        etISBNHead->setObjectName(QStringLiteral("etISBNHead"));
        etISBNHead->setGeometry(QRect(30, 230, 80, 21));
        etISBNHead->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        etClassifyHead = new QLineEdit(frame_9);
        etClassifyHead->setObjectName(QStringLiteral("etClassifyHead"));
        etClassifyHead->setGeometry(QRect(30, 270, 80, 21));
        etClassifyHead->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        etAuthor = new QLineEdit(frame_9);
        etAuthor->setObjectName(QStringLiteral("etAuthor"));
        etAuthor->setGeometry(QRect(130, 150, 171, 21));
        etAuthor->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        etPublish = new QLineEdit(frame_9);
        etPublish->setObjectName(QStringLiteral("etPublish"));
        etPublish->setGeometry(QRect(130, 190, 171, 21));
        etPublish->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        etISBN = new QLineEdit(frame_9);
        etISBN->setObjectName(QStringLiteral("etISBN"));
        etISBN->setGeometry(QRect(130, 230, 171, 21));
        etISBN->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        etClassify = new QLineEdit(frame_9);
        etClassify->setObjectName(QStringLiteral("etClassify"));
        etClassify->setGeometry(QRect(130, 270, 181, 21));
        etClassify->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        etClassifyHead_2 = new QLineEdit(frame_9);
        etClassifyHead_2->setObjectName(QStringLiteral("etClassifyHead_2"));
        etClassifyHead_2->setGeometry(QRect(30, 390, 101, 21));
        etClassifyHead_2->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        etPublishHead_2 = new QLineEdit(frame_9);
        etPublishHead_2->setObjectName(QStringLiteral("etPublishHead_2"));
        etPublishHead_2->setGeometry(QRect(30, 310, 80, 21));
        etPublishHead_2->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        etScore = new QLineEdit(frame_9);
        etScore->setObjectName(QStringLiteral("etScore"));
        etScore->setGeometry(QRect(130, 310, 191, 21));
        etScore->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        etISBNHead_2 = new QLineEdit(frame_9);
        etISBNHead_2->setObjectName(QStringLiteral("etISBNHead_2"));
        etISBNHead_2->setGeometry(QRect(30, 350, 101, 21));
        etISBNHead_2->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        etCount = new QLineEdit(frame_9);
        etCount->setObjectName(QStringLiteral("etCount"));
        etCount->setGeometry(QRect(140, 350, 171, 21));
        etCount->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        etNowCount = new QLineEdit(frame_9);
        etNowCount->setObjectName(QStringLiteral("etNowCount"));
        etNowCount->setGeometry(QRect(140, 390, 171, 21));
        etNowCount->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        etDate = new QLineEdit(frame_9);
        etDate->setObjectName(QStringLiteral("etDate"));
        etDate->setGeometry(QRect(140, 430, 171, 21));
        etDate->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        etClassifyHead_3 = new QLineEdit(frame_9);
        etClassifyHead_3->setObjectName(QStringLiteral("etClassifyHead_3"));
        etClassifyHead_3->setGeometry(QRect(30, 430, 101, 21));
        etClassifyHead_3->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));

        horizontalLayout_4->addWidget(frame_9);


        verticalLayout_2->addWidget(frame_6);

        frame_5 = new QFrame(frame_3);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy2);
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_5);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnReturnbook = new QPushButton(frame_5);
        btnReturnbook->setObjectName(QStringLiteral("btnReturnbook"));
        sizePolicy2.setHeightForWidth(btnReturnbook->sizePolicy().hasHeightForWidth());
        btnReturnbook->setSizePolicy(sizePolicy2);
        btnReturnbook->setStyleSheet(QString::fromUtf8("color:white;\n"
"border:none;\n"
"font-size:20px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(51, 153, 255,1), stop:1 rgba(52, 246, 177,1));\n"
"padding-top:5;\n"
"padding-bottom:5;"));

        horizontalLayout_2->addWidget(btnReturnbook);

        btnBorrowagain = new QPushButton(frame_5);
        btnBorrowagain->setObjectName(QStringLiteral("btnBorrowagain"));
        sizePolicy2.setHeightForWidth(btnBorrowagain->sizePolicy().hasHeightForWidth());
        btnBorrowagain->setSizePolicy(sizePolicy2);
        btnBorrowagain->setStyleSheet(QString::fromUtf8("color:white;\n"
"border:none;\n"
"font-size:20px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(51, 153, 255,1), stop:1 rgba(52, 246, 177,1));\n"
"padding-top:5;\n"
"padding-bottom:5;"));

        horizontalLayout_2->addWidget(btnBorrowagain);


        verticalLayout_2->addWidget(frame_5);


        horizontalLayout->addWidget(frame_3);


        retranslateUi(student_borrowdetail);

        QMetaObject::connectSlotsByName(student_borrowdetail);
    } // setupUi

    void retranslateUi(QWidget *student_borrowdetail)
    {
        student_borrowdetail->setWindowTitle(QApplication::translate("student_borrowdetail", "student_borrowdetail", Q_NULLPTR));
        btnPersonal->setText(QApplication::translate("student_borrowdetail", "\344\270\252\344\272\272\344\270\255\345\277\203", Q_NULLPTR));
        btnInformationchange->setText(QApplication::translate("student_borrowdetail", "\344\277\241\346\201\257\344\277\256\346\224\271", Q_NULLPTR));
        btnSearchbook->setText(QApplication::translate("student_borrowdetail", "\345\233\276\344\271\246\346\237\245\350\257\242", Q_NULLPTR));
        btnLogout->setText(QApplication::translate("student_borrowdetail", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
        etBookNameHead->setText(QApplication::translate("student_borrowdetail", "\350\277\275\351\243\216\347\255\235\347\232\204\344\272\272", Q_NULLPTR));
        lbCover->setText(QApplication::translate("student_borrowdetail", "TextLabel", Q_NULLPTR));
        etBookName->setText(QApplication::translate("student_borrowdetail", "\343\200\212\350\277\275\351\243\216\347\255\235\347\232\204\344\272\272\343\200\213", Q_NULLPTR));
        etAuthorHead->setText(QApplication::translate("student_borrowdetail", "\344\275\234\350\200\205\357\274\232", Q_NULLPTR));
        etPublishHead->setText(QApplication::translate("student_borrowdetail", "\345\207\272\347\211\210\347\244\276\357\274\232", Q_NULLPTR));
        etISBNHead->setText(QApplication::translate("student_borrowdetail", "ISBN\357\274\232", Q_NULLPTR));
        etClassifyHead->setText(QApplication::translate("student_borrowdetail", "\345\210\206\347\261\273\357\274\232", Q_NULLPTR));
        etClassifyHead_2->setText(QApplication::translate("student_borrowdetail", "\345\217\257\345\200\237\346\234\254\346\225\260\357\274\232", Q_NULLPTR));
        etPublishHead_2->setText(QApplication::translate("student_borrowdetail", "\350\257\204\345\210\206\357\274\232", Q_NULLPTR));
        etISBNHead_2->setText(QApplication::translate("student_borrowdetail", "\351\246\206\350\227\217\346\225\260\351\207\217\357\274\232", Q_NULLPTR));
        etClassifyHead_3->setText(QApplication::translate("student_borrowdetail", "\345\272\224\350\277\230\346\227\245\346\234\237\357\274\232", Q_NULLPTR));
        btnReturnbook->setText(QApplication::translate("student_borrowdetail", "\345\275\222\350\277\230\344\271\246\346\234\254", Q_NULLPTR));
        btnBorrowagain->setText(QApplication::translate("student_borrowdetail", "\345\233\276\344\271\246\347\273\255\345\200\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class student_borrowdetail: public Ui_student_borrowdetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_BORROWDETAIL_H
