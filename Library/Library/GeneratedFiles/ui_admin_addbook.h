/********************************************************************************
** Form generated from reading UI file 'admin_addbook.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_ADDBOOK_H
#define UI_ADMIN_ADDBOOK_H

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

class Ui_admin_addbook
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QFrame *frame_2;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout;
    QPushButton *btnPersonal;
    QPushButton *btnSearchuser;
    QPushButton *btnSearchbook;
    QPushButton *btnClassify;
    QPushButton *btnLogout;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_4;
    QPushButton *pushButton_2;
    QPushButton *btnAddMany;
    QFrame *frame_5;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *etName;
    QLineEdit *etISBN;
    QLineEdit *etAuthor;
    QLineEdit *lineEdit_4;
    QLineEdit *etPublish;
    QPushButton *btnClassifyShow;
    QPushButton *btnCover;
    QLineEdit *lineEdit_10;
    QLineEdit *etCount;
    QLineEdit *lineEdit_13;
    QLineEdit *etScore;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnAdd;

    void setupUi(QWidget *admin_addbook)
    {
        if (admin_addbook->objectName().isEmpty())
            admin_addbook->setObjectName(QStringLiteral("admin_addbook"));
        admin_addbook->resize(1081, 722);
        horizontalLayout = new QHBoxLayout(admin_addbook);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        frame = new QFrame(admin_addbook);
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

        btnSearchuser = new QPushButton(frame_8);
        btnSearchuser->setObjectName(QStringLiteral("btnSearchuser"));
        btnSearchuser->setMinimumSize(QSize(0, 100));
        btnSearchuser->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
"background:transparent;\n"
"cursor:pointer;"));

        verticalLayout->addWidget(btnSearchuser);

        btnSearchbook = new QPushButton(frame_8);
        btnSearchbook->setObjectName(QStringLiteral("btnSearchbook"));
        btnSearchbook->setMinimumSize(QSize(0, 100));
        btnSearchbook->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:white;\n"
"background:transparent;\n"
"cursor:pointer;\n"
"background-color:rgba(255,255,255,0.4);"));

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
"cursor:pointer;\n"
""));

        verticalLayout->addWidget(btnLogout);


        verticalLayout_6->addLayout(verticalLayout);


        horizontalLayout->addWidget(frame);

        frame_3 = new QFrame(admin_addbook);
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
        frame_4->setStyleSheet(QString::fromUtf8("border:2px solid #cccccc;\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-top:0;\n"
"border-left:0;\n"
"border-right:0;\n"
"margin-left:20px;\n"
"margin-right:20px;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        pushButton_2 = new QPushButton(frame_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 10, 191, 51));
        pushButton_2->setStyleSheet(QLatin1String("border:none;\n"
""));
        btnAddMany = new QPushButton(frame_4);
        btnAddMany->setObjectName(QStringLiteral("btnAddMany"));
        btnAddMany->setGeometry(QRect(560, 30, 131, 18));
        btnAddMany->setStyleSheet(QLatin1String("color:#4695d2;\n"
"border:none;\n"
"font-size:18px;"));

        verticalLayout_2->addWidget(frame_4);

        frame_5 = new QFrame(frame_3);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(frame_5);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 20, 61, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        lineEdit_2 = new QLineEdit(frame_5);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(70, 70, 81, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        lineEdit_3 = new QLineEdit(frame_5);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(70, 120, 81, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        lineEdit_5 = new QLineEdit(frame_5);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(70, 220, 61, 31));
        lineEdit_5->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        lineEdit_6 = new QLineEdit(frame_5);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(70, 460, 61, 31));
        lineEdit_6->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        etName = new QLineEdit(frame_5);
        etName->setObjectName(QStringLiteral("etName"));
        etName->setGeometry(QRect(160, 20, 201, 31));
        etName->setStyleSheet(QString::fromUtf8("border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        etISBN = new QLineEdit(frame_5);
        etISBN->setObjectName(QStringLiteral("etISBN"));
        etISBN->setGeometry(QRect(160, 70, 201, 31));
        etISBN->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        etAuthor = new QLineEdit(frame_5);
        etAuthor->setObjectName(QStringLiteral("etAuthor"));
        etAuthor->setGeometry(QRect(160, 120, 201, 31));
        etAuthor->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        lineEdit_4 = new QLineEdit(frame_5);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(70, 170, 81, 31));
        lineEdit_4->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        etPublish = new QLineEdit(frame_5);
        etPublish->setObjectName(QStringLiteral("etPublish"));
        etPublish->setGeometry(QRect(160, 170, 201, 31));
        etPublish->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        btnClassifyShow = new QPushButton(frame_5);
        btnClassifyShow->setObjectName(QStringLiteral("btnClassifyShow"));
        btnClassifyShow->setGeometry(QRect(160, 220, 201, 23));
        btnClassifyShow->setStyleSheet(QLatin1String("color:#4695d2;\n"
"border:none;\n"
"background:white;\n"
"text-size:80px;"));
        btnCover = new QPushButton(frame_5);
        btnCover->setObjectName(QStringLiteral("btnCover"));
        btnCover->setGeometry(QRect(160, 390, 131, 151));
        lineEdit_10 = new QLineEdit(frame_5);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(70, 280, 81, 31));
        lineEdit_10->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        etCount = new QLineEdit(frame_5);
        etCount->setObjectName(QStringLiteral("etCount"));
        etCount->setGeometry(QRect(160, 280, 201, 31));
        etCount->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        lineEdit_13 = new QLineEdit(frame_5);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(70, 330, 81, 31));
        lineEdit_13->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        etScore = new QLineEdit(frame_5);
        etScore->setObjectName(QStringLiteral("etScore"));
        etScore->setGeometry(QRect(160, 330, 201, 31));
        etScore->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));

        verticalLayout_2->addWidget(frame_5);

        frame_6 = new QFrame(frame_3);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        sizePolicy1.setHeightForWidth(frame_6->sizePolicy().hasHeightForWidth());
        frame_6->setSizePolicy(sizePolicy1);
        frame_6->setMaximumSize(QSize(16777215, 60));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_6);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnAdd = new QPushButton(frame_6);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnAdd->sizePolicy().hasHeightForWidth());
        btnAdd->setSizePolicy(sizePolicy2);
        btnAdd->setStyleSheet(QString::fromUtf8("color:white;\n"
"border:none;\n"
"font-size:20px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(51, 153, 255,1), stop:1 rgba(52, 246, 177,1));\n"
"padding-top:5;\n"
"padding-bottom:5;"));

        horizontalLayout_2->addWidget(btnAdd);


        verticalLayout_2->addWidget(frame_6);


        horizontalLayout->addWidget(frame_3);


        retranslateUi(admin_addbook);

        QMetaObject::connectSlotsByName(admin_addbook);
    } // setupUi

    void retranslateUi(QWidget *admin_addbook)
    {
        admin_addbook->setWindowTitle(QApplication::translate("admin_addbook", "admin_addbook", Q_NULLPTR));
        btnPersonal->setText(QApplication::translate("admin_addbook", "\344\270\252\344\272\272\344\270\255\345\277\203", Q_NULLPTR));
        btnSearchuser->setText(QApplication::translate("admin_addbook", "\350\264\246\345\217\267\347\256\241\347\220\206", Q_NULLPTR));
        btnSearchbook->setText(QApplication::translate("admin_addbook", "\345\233\276\344\271\246\347\256\241\347\220\206", Q_NULLPTR));
        btnClassify->setText(QApplication::translate("admin_addbook", "\345\210\206\347\261\273\347\256\241\347\220\206", Q_NULLPTR));
        btnLogout->setText(QApplication::translate("admin_addbook", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("admin_addbook", "\346\267\273\345\212\240/\344\277\256\346\224\271\345\233\276\344\271\246", Q_NULLPTR));
        btnAddMany->setText(QApplication::translate("admin_addbook", "\346\211\271\351\207\217\346\267\273\345\212\240", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("admin_addbook", "\344\271\246\345\220\215\357\274\232", Q_NULLPTR));
        lineEdit_2->setText(QApplication::translate("admin_addbook", "ISBN\357\274\232", Q_NULLPTR));
        lineEdit_3->setText(QApplication::translate("admin_addbook", "\344\275\234\350\200\205\357\274\232", Q_NULLPTR));
        lineEdit_5->setText(QApplication::translate("admin_addbook", "\345\210\206\347\261\273\357\274\232", Q_NULLPTR));
        lineEdit_6->setText(QApplication::translate("admin_addbook", "\345\260\201\351\235\242\357\274\232", Q_NULLPTR));
        etName->setText(QString());
        lineEdit_4->setText(QApplication::translate("admin_addbook", "\345\207\272\347\211\210\347\244\276\357\274\232", Q_NULLPTR));
        btnClassifyShow->setText(QApplication::translate("admin_addbook", "\350\257\267\351\200\211\346\213\251\345\210\206\347\261\273", Q_NULLPTR));
        btnCover->setText(QApplication::translate("admin_addbook", "PushButton", Q_NULLPTR));
        lineEdit_10->setText(QApplication::translate("admin_addbook", "\345\272\223\345\255\230\351\207\217\357\274\232", Q_NULLPTR));
        lineEdit_13->setText(QApplication::translate("admin_addbook", "\350\257\204\345\210\206\357\274\232", Q_NULLPTR));
        etScore->setText(QString());
        btnAdd->setText(QApplication::translate("admin_addbook", "\347\241\256\350\256\244\346\217\220\344\272\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class admin_addbook: public Ui_admin_addbook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_ADDBOOK_H
