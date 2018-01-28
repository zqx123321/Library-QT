/********************************************************************************
** Form generated from reading UI file 'admin_searchuser.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_SEARCHUSER_H
#define UI_ADMIN_SEARCHUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_searchuser
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
    QPushButton *btnClassify;
    QPushButton *btnLogout;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_4;
    QGridLayout *gridLayout;
    QTextEdit *txtSearch;
    QPushButton *btnSearch;
    QPushButton *btnAdd;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioName;
    QRadioButton *radioCode;
    QRadioButton *radioMajor;
    QTableWidget *tableWidget;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnFirstPage;
    QPushButton *btnLastPage;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_4;
    QLineEdit *etIndexPage;
    QLineEdit *lineEdit_2;
    QLineEdit *etCountPage;
    QLineEdit *lineEdit;
    QPushButton *btnNextPage;
    QPushButton *btnTheLast;

    void setupUi(QWidget *admin_searchuser)
    {
        if (admin_searchuser->objectName().isEmpty())
            admin_searchuser->setObjectName(QStringLiteral("admin_searchuser"));
        admin_searchuser->resize(1118, 722);
        horizontalLayout = new QHBoxLayout(admin_searchuser);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        frame = new QFrame(admin_searchuser);
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
        frame_8->setGeometry(QRect(0, 230, 301, 491));
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
"cursor:pointer;\n"
""));

        verticalLayout->addWidget(btnSearchbook);

        btnClassify = new QPushButton(frame_8);
        btnClassify->setObjectName(QStringLiteral("btnClassify"));
        btnClassify->setMinimumSize(QSize(0, 100));
        btnClassify->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
"background:transparent;\n"
"cursor:pointer;"));

        verticalLayout->addWidget(btnClassify);

        btnLogout = new QPushButton(frame_8);
        btnLogout->setObjectName(QStringLiteral("btnLogout"));
        btnLogout->setMinimumSize(QSize(0, 100));
        btnLogout->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
"background:transparent;\n"
"cursor:pointer;"));

        verticalLayout->addWidget(btnLogout);


        verticalLayout_6->addLayout(verticalLayout);


        horizontalLayout->addWidget(frame);

        frame_3 = new QFrame(admin_searchuser);
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
        sizePolicy1.setVerticalStretch(4);
        sizePolicy1.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy1);
        frame_4->setStyleSheet(QLatin1String("border:2px solid #cccccc;\n"
"border-top:0px;\n"
"border-left:0px;\n"
"border-right:0px;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_4);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        txtSearch = new QTextEdit(frame_4);
        txtSearch->setObjectName(QStringLiteral("txtSearch"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(100);
        sizePolicy2.setHeightForWidth(txtSearch->sizePolicy().hasHeightForWidth());
        txtSearch->setSizePolicy(sizePolicy2);
        txtSearch->setMaximumSize(QSize(16777215, 30));
        txtSearch->setStyleSheet(QLatin1String("color:#4695d2;\n"
"border:none;\n"
"font-size:18px;"));

        gridLayout->addWidget(txtSearch, 0, 0, 1, 1);

        btnSearch = new QPushButton(frame_4);
        btnSearch->setObjectName(QStringLiteral("btnSearch"));
        btnSearch->setMinimumSize(QSize(0, 30));
        btnSearch->setStyleSheet(QLatin1String("color:#4695d2;\n"
"image: url(:/Library/images/search.png);\n"
"border:none;\n"
"font-size:18px;"));

        gridLayout->addWidget(btnSearch, 0, 1, 1, 1);

        btnAdd = new QPushButton(frame_4);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));
        btnAdd->setStyleSheet(QLatin1String("color:#4695d2;\n"
"border:none;\n"
"font-size:18px;"));

        gridLayout->addWidget(btnAdd, 0, 2, 1, 1);


        verticalLayout_2->addWidget(frame_4);

        frame_6 = new QFrame(frame_3);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setMaximumSize(QSize(16777215, 50));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_6);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        radioName = new QRadioButton(frame_6);
        radioName->setObjectName(QStringLiteral("radioName"));

        horizontalLayout_4->addWidget(radioName);

        radioCode = new QRadioButton(frame_6);
        radioCode->setObjectName(QStringLiteral("radioCode"));

        horizontalLayout_4->addWidget(radioCode);

        radioMajor = new QRadioButton(frame_6);
        radioMajor->setObjectName(QStringLiteral("radioMajor"));

        horizontalLayout_4->addWidget(radioMajor);


        verticalLayout_2->addWidget(frame_6);

        tableWidget = new QTableWidget(frame_3);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy3);

        verticalLayout_2->addWidget(tableWidget);

        frame_5 = new QFrame(frame_3);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy4);
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_5);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnFirstPage = new QPushButton(frame_5);
        btnFirstPage->setObjectName(QStringLiteral("btnFirstPage"));
        sizePolicy4.setHeightForWidth(btnFirstPage->sizePolicy().hasHeightForWidth());
        btnFirstPage->setSizePolicy(sizePolicy4);
        btnFirstPage->setStyleSheet(QLatin1String("color:#4695d2;\n"
"border:none;\n"
"font-size:18px;"));

        horizontalLayout_2->addWidget(btnFirstPage);

        btnLastPage = new QPushButton(frame_5);
        btnLastPage->setObjectName(QStringLiteral("btnLastPage"));
        sizePolicy4.setHeightForWidth(btnLastPage->sizePolicy().hasHeightForWidth());
        btnLastPage->setSizePolicy(sizePolicy4);
        btnLastPage->setStyleSheet(QLatin1String("color:#4695d2;\n"
"border:none;\n"
"font-size:18px;"));

        horizontalLayout_2->addWidget(btnLastPage);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lineEdit_4 = new QLineEdit(frame_5);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy5);
        lineEdit_4->setMaximumSize(QSize(60, 16777215));
        lineEdit_4->setStyleSheet(QLatin1String("border:none;\n"
"font-size:18px;"));
        lineEdit_4->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_4);

        etIndexPage = new QLineEdit(frame_5);
        etIndexPage->setObjectName(QStringLiteral("etIndexPage"));
        sizePolicy5.setHeightForWidth(etIndexPage->sizePolicy().hasHeightForWidth());
        etIndexPage->setSizePolicy(sizePolicy5);
        etIndexPage->setMaximumSize(QSize(40, 16777215));
        etIndexPage->setStyleSheet(QLatin1String("border:none;\n"
"font-size:18px;"));
        etIndexPage->setReadOnly(true);

        horizontalLayout_3->addWidget(etIndexPage);

        lineEdit_2 = new QLineEdit(frame_5);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        sizePolicy5.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy5);
        lineEdit_2->setMaximumSize(QSize(60, 16777215));
        lineEdit_2->setStyleSheet(QLatin1String("border:none;\n"
"font-size:18px;"));
        lineEdit_2->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_2);

        etCountPage = new QLineEdit(frame_5);
        etCountPage->setObjectName(QStringLiteral("etCountPage"));
        sizePolicy5.setHeightForWidth(etCountPage->sizePolicy().hasHeightForWidth());
        etCountPage->setSizePolicy(sizePolicy5);
        etCountPage->setMaximumSize(QSize(40, 16777215));
        etCountPage->setStyleSheet(QLatin1String("border:none;\n"
"font-size:18px;\n"
""));
        etCountPage->setReadOnly(true);

        horizontalLayout_3->addWidget(etCountPage);

        lineEdit = new QLineEdit(frame_5);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        sizePolicy5.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy5);
        lineEdit->setMaximumSize(QSize(20, 16777215));
        lineEdit->setStyleSheet(QLatin1String("border:none;\n"
"font-size:18px;"));
        lineEdit->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit);


        horizontalLayout_2->addLayout(horizontalLayout_3);

        btnNextPage = new QPushButton(frame_5);
        btnNextPage->setObjectName(QStringLiteral("btnNextPage"));
        sizePolicy4.setHeightForWidth(btnNextPage->sizePolicy().hasHeightForWidth());
        btnNextPage->setSizePolicy(sizePolicy4);
        btnNextPage->setStyleSheet(QLatin1String("color:#4695d2;\n"
"border:none;\n"
"font-size:18px;"));

        horizontalLayout_2->addWidget(btnNextPage);

        btnTheLast = new QPushButton(frame_5);
        btnTheLast->setObjectName(QStringLiteral("btnTheLast"));
        sizePolicy4.setHeightForWidth(btnTheLast->sizePolicy().hasHeightForWidth());
        btnTheLast->setSizePolicy(sizePolicy4);
        btnTheLast->setStyleSheet(QLatin1String("color:#4695d2;\n"
"border:none;\n"
"font-size:18px;"));

        horizontalLayout_2->addWidget(btnTheLast);


        verticalLayout_2->addWidget(frame_5);


        horizontalLayout->addWidget(frame_3);


        retranslateUi(admin_searchuser);

        QMetaObject::connectSlotsByName(admin_searchuser);
    } // setupUi

    void retranslateUi(QWidget *admin_searchuser)
    {
        admin_searchuser->setWindowTitle(QApplication::translate("admin_searchuser", "admin_searchuser", Q_NULLPTR));
        btnPersonal->setText(QApplication::translate("admin_searchuser", "\344\270\252\344\272\272\344\270\255\345\277\203", Q_NULLPTR));
        btnInformationchange->setText(QApplication::translate("admin_searchuser", "\350\264\246\345\217\267\347\256\241\347\220\206", Q_NULLPTR));
        btnSearchbook->setText(QApplication::translate("admin_searchuser", "\345\233\276\344\271\246\347\256\241\347\220\206", Q_NULLPTR));
        btnClassify->setText(QApplication::translate("admin_searchuser", "\345\210\206\347\261\273\347\256\241\347\220\206", Q_NULLPTR));
        btnLogout->setText(QApplication::translate("admin_searchuser", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
        btnSearch->setText(QString());
        btnAdd->setText(QApplication::translate("admin_searchuser", "\346\267\273\345\212\240\345\255\246\347\224\237", Q_NULLPTR));
        radioName->setText(QApplication::translate("admin_searchuser", "\345\247\223\345\220\215", Q_NULLPTR));
        radioCode->setText(QApplication::translate("admin_searchuser", "\345\255\246\345\217\267", Q_NULLPTR));
        radioMajor->setText(QApplication::translate("admin_searchuser", "\344\270\223\344\270\232", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("admin_searchuser", "\345\247\223\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("admin_searchuser", "\345\255\246\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("admin_searchuser", "\344\270\223\344\270\232", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("admin_searchuser", "\344\277\256\346\224\271", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("admin_searchuser", "\351\207\215\347\275\256\345\257\206\347\240\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("admin_searchuser", "\346\270\205\351\231\244\346\254\240\346\254\276", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("admin_searchuser", "\345\210\240\351\231\244", Q_NULLPTR));
        btnFirstPage->setText(QApplication::translate("admin_searchuser", "\351\246\226\351\241\265", Q_NULLPTR));
        btnLastPage->setText(QApplication::translate("admin_searchuser", "\344\270\212\344\270\200\351\241\265", Q_NULLPTR));
        lineEdit_4->setText(QApplication::translate("admin_searchuser", "\345\275\223\345\211\215\347\254\254", Q_NULLPTR));
        etIndexPage->setText(QApplication::translate("admin_searchuser", "0", Q_NULLPTR));
        lineEdit_2->setText(QApplication::translate("admin_searchuser", "\351\241\265\357\274\214\345\205\261", Q_NULLPTR));
        etCountPage->setText(QApplication::translate("admin_searchuser", "0", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("admin_searchuser", "\351\241\265", Q_NULLPTR));
        btnNextPage->setText(QApplication::translate("admin_searchuser", "\344\270\213\344\270\200\351\241\265", Q_NULLPTR));
        btnTheLast->setText(QApplication::translate("admin_searchuser", "\345\260\276\351\241\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class admin_searchuser: public Ui_admin_searchuser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_SEARCHUSER_H
