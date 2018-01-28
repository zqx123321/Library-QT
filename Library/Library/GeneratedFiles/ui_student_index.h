/********************************************************************************
** Form generated from reading UI file 'student_index.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_INDEX_H
#define UI_STUDENT_INDEX_H

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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_student_index
{
public:
    QVBoxLayout *verticalLayout_2;
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
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_4;
    QFrame *frameHead;
    QLabel *lbHead;
    QLineEdit *etSname;
    QLineEdit *etSnumber;
    QLineEdit *etSdept;
    QLineEdit *etDebt;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *etBorrownumber;
    QPushButton *btnBorrowmore;
    QFrame *frame_10;
    QVBoxLayout *verticalLayout_7;
    QTableWidget *tableBorrow;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame_9;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_2;
    QTableWidget *tableOrder;

    void setupUi(QWidget *student_index)
    {
        if (student_index->objectName().isEmpty())
            student_index->setObjectName(QStringLiteral("student_index"));
        student_index->resize(1213, 806);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(student_index->sizePolicy().hasHeightForWidth());
        student_index->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(student_index);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, -1, -1);
        frame = new QFrame(student_index);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
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
"background-color:rgba(255,255,255,0.4);\n"
"cursor:pointer;"));

        verticalLayout->addWidget(btnPersonal);

        btnInformationchange = new QPushButton(frame_8);
        btnInformationchange->setObjectName(QStringLiteral("btnInformationchange"));
        btnInformationchange->setMinimumSize(QSize(0, 100));
        btnInformationchange->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
"background:transparent;\n"
"cursor:pointer;"));

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
        btnLogout->setMaximumSize(QSize(16777215, 100));
        btnLogout->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
"background:transparent;\n"
"cursor:pointer;"));

        verticalLayout->addWidget(btnLogout);


        verticalLayout_6->addLayout(verticalLayout);


        horizontalLayout->addWidget(frame);

        frame_3 = new QFrame(student_index);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy2);
        frame_3->setStyleSheet(QStringLiteral("background:white;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy3);
        frame_4->setMinimumSize(QSize(0, 150));
        frame_4->setMaximumSize(QSize(16777215, 200));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        frameHead = new QFrame(frame_4);
        frameHead->setObjectName(QStringLiteral("frameHead"));
        frameHead->setGeometry(QRect(10, 0, 111, 131));
        frameHead->setStyleSheet(QStringLiteral(""));
        frameHead->setFrameShape(QFrame::StyledPanel);
        frameHead->setFrameShadow(QFrame::Raised);
        lbHead = new QLabel(frameHead);
        lbHead->setObjectName(QStringLiteral("lbHead"));
        lbHead->setGeometry(QRect(0, 10, 101, 121));
        lbHead->setStyleSheet(QStringLiteral("border-radius:999999;"));
        etSname = new QLineEdit(frame_4);
        etSname->setObjectName(QStringLiteral("etSname"));
        etSname->setGeometry(QRect(130, 20, 191, 51));
        sizePolicy.setHeightForWidth(etSname->sizePolicy().hasHeightForWidth());
        etSname->setSizePolicy(sizePolicy);
        etSname->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-width:0;\n"
"border-style:outset;"));
        etSnumber = new QLineEdit(frame_4);
        etSnumber->setObjectName(QStringLiteral("etSnumber"));
        etSnumber->setGeometry(QRect(130, 70, 171, 21));
        etSnumber->setStyleSheet(QString::fromUtf8("border-width:0;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-style:outset;"));
        etSdept = new QLineEdit(frame_4);
        etSdept->setObjectName(QStringLiteral("etSdept"));
        etSdept->setGeometry(QRect(130, 90, 131, 21));
        etSdept->setStyleSheet(QString::fromUtf8("border-width:0;\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-style:outset;"));
        etDebt = new QLineEdit(frame_4);
        etDebt->setObjectName(QStringLiteral("etDebt"));
        etDebt->setGeometry(QRect(270, 90, 141, 21));
        etDebt->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border:0;\n"
"border-style:outset;"));

        verticalLayout_3->addWidget(frame_4);

        frame_5 = new QFrame(frame_3);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy4);
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_5);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        frame_7 = new QFrame(frame_5);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(62);
        sizePolicy5.setHeightForWidth(frame_7->sizePolicy().hasHeightForWidth());
        frame_7->setSizePolicy(sizePolicy5);
        frame_7->setMinimumSize(QSize(0, 62));
        frame_7->setMaximumSize(QSize(16777215, 70));
        frame_7->setStyleSheet(QString::fromUtf8("border:2px solid #cccccc;\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-top:0;\n"
"border-left:0;\n"
"border-right:0;"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_7);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit = new QLineEdit(frame_7);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy6);
        lineEdit->setMaximumSize(QSize(80, 16777215));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border:none;\n"
""));

        horizontalLayout_2->addWidget(lineEdit);

        etBorrownumber = new QLineEdit(frame_7);
        etBorrownumber->setObjectName(QStringLiteral("etBorrownumber"));
        etBorrownumber->setStyleSheet(QString::fromUtf8("border-width:0;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-style:outset;\n"
"color:#409FEC;"));

        horizontalLayout_2->addWidget(etBorrownumber);

        btnBorrowmore = new QPushButton(frame_7);
        btnBorrowmore->setObjectName(QStringLiteral("btnBorrowmore"));
        btnBorrowmore->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border:none;\n"
"text-size:20px;\n"
"cursor:pointer;"));

        horizontalLayout_2->addWidget(btnBorrowmore);


        verticalLayout_4->addWidget(frame_7);

        frame_10 = new QFrame(frame_5);
        frame_10->setObjectName(QStringLiteral("frame_10"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_10);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        tableBorrow = new QTableWidget(frame_10);
        if (tableBorrow->columnCount() < 5)
            tableBorrow->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableBorrow->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableBorrow->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableBorrow->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableBorrow->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableBorrow->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableBorrow->setObjectName(QStringLiteral("tableBorrow"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(tableBorrow->sizePolicy().hasHeightForWidth());
        tableBorrow->setSizePolicy(sizePolicy7);
        tableBorrow->setMaximumSize(QSize(16777215, 200));

        verticalLayout_7->addWidget(tableBorrow);


        verticalLayout_4->addWidget(frame_10);


        verticalLayout_3->addWidget(frame_5);

        frame_6 = new QFrame(frame_3);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        sizePolicy4.setHeightForWidth(frame_6->sizePolicy().hasHeightForWidth());
        frame_6->setSizePolicy(sizePolicy4);
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_6);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        frame_9 = new QFrame(frame_6);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(62);
        sizePolicy8.setHeightForWidth(frame_9->sizePolicy().hasHeightForWidth());
        frame_9->setSizePolicy(sizePolicy8);
        frame_9->setMinimumSize(QSize(0, 62));
        frame_9->setMaximumSize(QSize(16777215, 70));
        frame_9->setStyleSheet(QString::fromUtf8("border:2px solid #cccccc;\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-top:0;\n"
"border-left:0;\n"
"border-right:0;"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_9);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lineEdit_2 = new QLineEdit(frame_9);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));

        horizontalLayout_3->addWidget(lineEdit_2);


        verticalLayout_5->addWidget(frame_9);

        tableOrder = new QTableWidget(frame_6);
        tableOrder->setObjectName(QStringLiteral("tableOrder"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(tableOrder->sizePolicy().hasHeightForWidth());
        tableOrder->setSizePolicy(sizePolicy9);

        verticalLayout_5->addWidget(tableOrder);


        verticalLayout_3->addWidget(frame_6);


        horizontalLayout->addWidget(frame_3);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(student_index);

        QMetaObject::connectSlotsByName(student_index);
    } // setupUi

    void retranslateUi(QWidget *student_index)
    {
        student_index->setWindowTitle(QApplication::translate("student_index", "student_index", Q_NULLPTR));
        btnPersonal->setText(QApplication::translate("student_index", "\344\270\252\344\272\272\344\270\255\345\277\203", Q_NULLPTR));
        btnInformationchange->setText(QApplication::translate("student_index", "\344\277\241\346\201\257\344\277\256\346\224\271", Q_NULLPTR));
        btnSearchbook->setText(QApplication::translate("student_index", "\345\233\276\344\271\246\346\237\245\350\257\242", Q_NULLPTR));
        btnLogout->setText(QApplication::translate("student_index", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
        lbHead->setText(QString());
        etSname->setText(QApplication::translate("student_index", "\345\274\240\351\222\246\350\264\244", Q_NULLPTR));
        etSnumber->setText(QApplication::translate("student_index", "(15020031025)", Q_NULLPTR));
        etSdept->setText(QApplication::translate("student_index", "\350\256\241\347\256\227\346\234\272\347\247\221\345\255\246\344\270\216\346\212\200\346\234\257", Q_NULLPTR));
        etDebt->setText(QApplication::translate("student_index", "\346\254\240\346\254\276\351\242\235\345\272\246:20.00\345\205\203", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("student_index", "\345\275\223\345\211\215\345\200\237\351\230\205", Q_NULLPTR));
        etBorrownumber->setText(QApplication::translate("student_index", "\357\274\21020\357\274\211", Q_NULLPTR));
        btnBorrowmore->setText(QApplication::translate("student_index", "\346\237\245\347\234\213\345\205\250\351\203\250>>", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableBorrow->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("student_index", "\345\260\201\351\235\242", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableBorrow->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("student_index", "\344\271\246\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableBorrow->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("student_index", "\344\275\234\350\200\205", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableBorrow->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("student_index", "\345\207\272\347\211\210\347\244\276", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableBorrow->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("student_index", "\346\237\245\347\234\213\350\257\246\346\203\205", Q_NULLPTR));
        lineEdit_2->setText(QApplication::translate("student_index", "\347\214\234\344\275\240\345\226\234\346\254\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class student_index: public Ui_student_index {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_INDEX_H
