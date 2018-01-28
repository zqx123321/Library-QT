/********************************************************************************
** Form generated from reading UI file 'admin_addclassify.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_ADDCLASSIFY_H
#define UI_ADMIN_ADDCLASSIFY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_addclassify
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QLineEdit *lineEdit;
    QLineEdit *etName;
    QPushButton *btnAdd;

    void setupUi(QWidget *admin_addclassify)
    {
        if (admin_addclassify->objectName().isEmpty())
            admin_addclassify->setObjectName(QStringLiteral("admin_addclassify"));
        admin_addclassify->resize(500, 400);
        admin_addclassify->setMaximumSize(QSize(500, 400));
        gridLayout = new QGridLayout(admin_addclassify);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(admin_addclassify);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMaximumSize(QSize(511, 401));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 70, 101, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        lineEdit->setReadOnly(true);
        etName = new QLineEdit(frame);
        etName->setObjectName(QStringLiteral("etName"));
        etName->setGeometry(QRect(180, 70, 201, 31));
        etName->setStyleSheet(QString::fromUtf8("border:1px solid #cccccc;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        btnAdd = new QPushButton(frame);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));
        btnAdd->setGeometry(QRect(50, 200, 361, 40));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnAdd->sizePolicy().hasHeightForWidth());
        btnAdd->setSizePolicy(sizePolicy);
        btnAdd->setStyleSheet(QString::fromUtf8("color:white;\n"
"border:none;\n"
"font-size:20px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(51, 153, 255,1), stop:1 rgba(52, 246, 177,1));\n"
"padding-top:5;\n"
"padding-bottom:5;"));

        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(admin_addclassify);

        QMetaObject::connectSlotsByName(admin_addclassify);
    } // setupUi

    void retranslateUi(QWidget *admin_addclassify)
    {
        admin_addclassify->setWindowTitle(QApplication::translate("admin_addclassify", "admin_addclassify", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("admin_addclassify", "\345\210\206\347\261\273\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        etName->setText(QString());
        btnAdd->setText(QApplication::translate("admin_addclassify", "\347\241\256\350\256\244\346\217\220\344\272\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class admin_addclassify: public Ui_admin_addclassify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_ADDCLASSIFY_H
