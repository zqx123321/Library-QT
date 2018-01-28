/********************************************************************************
** Form generated from reading UI file 'student_borrow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_BORROW_H
#define UI_STUDENT_BORROW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_student_borrow
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
    QPushButton *pushButton;
    QLineEdit *etBorrowNumber;
    QTableWidget *tableBorrow;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnFirstPage;
    QPushButton *btnLastPage;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit;
    QLineEdit *etPageIndex;
    QLineEdit *lineEdit_3;
    QLineEdit *etPageCount;
    QLineEdit *lineEdit_5;
    QPushButton *btnNextPage;
    QPushButton *btnTheLast;

    void setupUi(QWidget *student_borrow)
    {
        if (student_borrow->objectName().isEmpty())
            student_borrow->setObjectName(QStringLiteral("student_borrow"));
        student_borrow->resize(1024, 722);
        horizontalLayout = new QHBoxLayout(student_borrow);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        frame = new QFrame(student_borrow);
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
"background-color:rgba(255,255,255,0.4);"));

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

        frame_3 = new QFrame(student_borrow);
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
        pushButton = new QPushButton(frame_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("color:#4D4D4D;\n"
"border:none;\n"
"font-size:24px;\n"
"font-weight:500;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_3->addWidget(pushButton);

        etBorrowNumber = new QLineEdit(frame_4);
        etBorrowNumber->setObjectName(QStringLiteral("etBorrowNumber"));
        etBorrowNumber->setStyleSheet(QLatin1String("color:#4695d2;\n"
"border:none;\n"
"font-size:18px;"));

        horizontalLayout_3->addWidget(etBorrowNumber);


        verticalLayout_2->addWidget(frame_4);

        tableBorrow = new QTableWidget(frame_3);
        if (tableBorrow->columnCount() < 6)
            tableBorrow->setColumnCount(6);
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
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableBorrow->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableBorrow->setObjectName(QStringLiteral("tableBorrow"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableBorrow->sizePolicy().hasHeightForWidth());
        tableBorrow->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(tableBorrow);

        frame_5 = new QFrame(frame_3);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy3);
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_5);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnFirstPage = new QPushButton(frame_5);
        btnFirstPage->setObjectName(QStringLiteral("btnFirstPage"));
        sizePolicy3.setHeightForWidth(btnFirstPage->sizePolicy().hasHeightForWidth());
        btnFirstPage->setSizePolicy(sizePolicy3);
        btnFirstPage->setStyleSheet(QLatin1String("color:#4695d2;\n"
"border:none;\n"
"font-size:18px;"));

        horizontalLayout_2->addWidget(btnFirstPage);

        btnLastPage = new QPushButton(frame_5);
        btnLastPage->setObjectName(QStringLiteral("btnLastPage"));
        sizePolicy3.setHeightForWidth(btnLastPage->sizePolicy().hasHeightForWidth());
        btnLastPage->setSizePolicy(sizePolicy3);
        btnLastPage->setStyleSheet(QLatin1String("color:#4695d2;\n"
"border:none;\n"
"font-size:18px;"));

        horizontalLayout_2->addWidget(btnLastPage);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lineEdit = new QLineEdit(frame_5);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy4);
        lineEdit->setMaximumSize(QSize(60, 16777215));
        lineEdit->setStyleSheet(QLatin1String("border:none;\n"
"font-size:18px;"));

        horizontalLayout_4->addWidget(lineEdit);

        etPageIndex = new QLineEdit(frame_5);
        etPageIndex->setObjectName(QStringLiteral("etPageIndex"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(etPageIndex->sizePolicy().hasHeightForWidth());
        etPageIndex->setSizePolicy(sizePolicy5);
        etPageIndex->setMaximumSize(QSize(20, 16777215));
        etPageIndex->setStyleSheet(QLatin1String("border:none;\n"
"font-size:18px;"));

        horizontalLayout_4->addWidget(etPageIndex);

        lineEdit_3 = new QLineEdit(frame_5);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        sizePolicy5.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy5);
        lineEdit_3->setMaximumSize(QSize(60, 16777215));
        lineEdit_3->setStyleSheet(QLatin1String("border:none;\n"
"font-size:18px;"));

        horizontalLayout_4->addWidget(lineEdit_3);

        etPageCount = new QLineEdit(frame_5);
        etPageCount->setObjectName(QStringLiteral("etPageCount"));
        sizePolicy4.setHeightForWidth(etPageCount->sizePolicy().hasHeightForWidth());
        etPageCount->setSizePolicy(sizePolicy4);
        etPageCount->setMaximumSize(QSize(20, 16777215));
        etPageCount->setStyleSheet(QLatin1String("border:none;\n"
"font-size:18px;"));

        horizontalLayout_4->addWidget(etPageCount);

        lineEdit_5 = new QLineEdit(frame_5);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        sizePolicy4.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy4);
        lineEdit_5->setMaximumSize(QSize(20, 16777215));
        lineEdit_5->setStyleSheet(QLatin1String("border:none;\n"
"font-size:18px;"));

        horizontalLayout_4->addWidget(lineEdit_5);


        horizontalLayout_2->addLayout(horizontalLayout_4);

        btnNextPage = new QPushButton(frame_5);
        btnNextPage->setObjectName(QStringLiteral("btnNextPage"));
        sizePolicy3.setHeightForWidth(btnNextPage->sizePolicy().hasHeightForWidth());
        btnNextPage->setSizePolicy(sizePolicy3);
        btnNextPage->setStyleSheet(QLatin1String("color:#4695d2;\n"
"border:none;\n"
"font-size:18px;"));

        horizontalLayout_2->addWidget(btnNextPage);

        btnTheLast = new QPushButton(frame_5);
        btnTheLast->setObjectName(QStringLiteral("btnTheLast"));
        sizePolicy3.setHeightForWidth(btnTheLast->sizePolicy().hasHeightForWidth());
        btnTheLast->setSizePolicy(sizePolicy3);
        btnTheLast->setStyleSheet(QLatin1String("color:#4695d2;\n"
"border:none;\n"
"font-size:18px;"));

        horizontalLayout_2->addWidget(btnTheLast);


        verticalLayout_2->addWidget(frame_5);


        horizontalLayout->addWidget(frame_3);


        retranslateUi(student_borrow);

        QMetaObject::connectSlotsByName(student_borrow);
    } // setupUi

    void retranslateUi(QWidget *student_borrow)
    {
        student_borrow->setWindowTitle(QApplication::translate("student_borrow", "student_borrow", Q_NULLPTR));
        btnPersonal->setText(QApplication::translate("student_borrow", "\344\270\252\344\272\272\344\270\255\345\277\203", Q_NULLPTR));
        btnInformationchange->setText(QApplication::translate("student_borrow", "\344\277\241\346\201\257\344\277\256\346\224\271", Q_NULLPTR));
        btnSearchbook->setText(QApplication::translate("student_borrow", "\345\233\276\344\271\246\346\237\245\350\257\242", Q_NULLPTR));
        btnLogout->setText(QApplication::translate("student_borrow", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
        pushButton->setText(QApplication::translate("student_borrow", "\345\275\223\345\211\215\345\200\237\351\230\205", Q_NULLPTR));
        etBorrowNumber->setText(QApplication::translate("student_borrow", "\357\274\21020\357\274\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableBorrow->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("student_borrow", "\345\260\201\351\235\242", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableBorrow->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("student_borrow", "\344\271\246\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableBorrow->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("student_borrow", "\344\275\234\350\200\205", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableBorrow->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("student_borrow", "\345\207\272\347\211\210\347\244\276", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableBorrow->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("student_borrow", "\347\212\266\346\200\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableBorrow->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("student_borrow", "\346\237\245\347\234\213\350\257\246\346\203\205", Q_NULLPTR));
        btnFirstPage->setText(QApplication::translate("student_borrow", "\351\246\226\351\241\265", Q_NULLPTR));
        btnLastPage->setText(QApplication::translate("student_borrow", "\344\270\212\344\270\200\351\241\265", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("student_borrow", "\345\275\223\345\211\215\347\254\254", Q_NULLPTR));
        etPageIndex->setText(QApplication::translate("student_borrow", "0", Q_NULLPTR));
        lineEdit_3->setText(QApplication::translate("student_borrow", "\351\241\265\357\274\214\345\205\261", Q_NULLPTR));
        etPageCount->setText(QApplication::translate("student_borrow", "0", Q_NULLPTR));
        lineEdit_5->setText(QApplication::translate("student_borrow", "\351\241\265", Q_NULLPTR));
        btnNextPage->setText(QApplication::translate("student_borrow", "\344\270\213\344\270\200\351\241\265", Q_NULLPTR));
        btnTheLast->setText(QApplication::translate("student_borrow", "\345\260\276\351\241\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class student_borrow: public Ui_student_borrow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_BORROW_H
