/********************************************************************************
** Form generated from reading UI file 'admin_studentclassify.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_STUDENTCLASSIFY_H
#define UI_ADMIN_STUDENTCLASSIFY_H

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

class Ui_admin_studentclassify
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout;
    QPushButton *btnPersonal;
    QPushButton *btnSearchuser;
    QPushButton *btnSearchbook;
    QPushButton *btnClassify;
    QPushButton *btnLogout;
    QFrame *frame_2;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *etClassify;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_4;
    QTableWidget *tableWidget;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_2;

    void setupUi(QWidget *admin_studentclassify)
    {
        if (admin_studentclassify->objectName().isEmpty())
            admin_studentclassify->setObjectName(QStringLiteral("admin_studentclassify"));
        admin_studentclassify->resize(1082, 722);
        horizontalLayout = new QHBoxLayout(admin_studentclassify);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        frame = new QFrame(admin_studentclassify);
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
"cursor:pointer;\n"
"background-color:rgba(255,255,255,0.4);"));

        verticalLayout->addWidget(btnSearchuser);

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
"cursor:pointer;\n"
""));

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

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(60, 30, 171, 176));
        frame_2->setMinimumSize(QSize(0, 0));
        frame_2->setBaseSize(QSize(0, 100));
        frame_2->setStyleSheet(QLatin1String("image: url(:/Library/images/logo2.png);\n"
"background:transparent;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(frame);

        frame_3 = new QFrame(admin_studentclassify);
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
        etClassify = new QLineEdit(frame_4);
        etClassify->setObjectName(QStringLiteral("etClassify"));
        etClassify->setStyleSheet(QString::fromUtf8("color:#4D4D4D;\n"
"border:none;\n"
"font-size:24px;\n"
"font-weight:500;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        etClassify->setReadOnly(true);

        horizontalLayout_3->addWidget(etClassify);


        verticalLayout_2->addWidget(frame_4);

        frame_6 = new QFrame(frame_3);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_6);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        tableWidget = new QTableWidget(frame_6);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        horizontalLayout_4->addWidget(tableWidget);


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

        verticalLayout_2->addWidget(frame_5);


        horizontalLayout->addWidget(frame_3);


        retranslateUi(admin_studentclassify);

        QMetaObject::connectSlotsByName(admin_studentclassify);
    } // setupUi

    void retranslateUi(QWidget *admin_studentclassify)
    {
        admin_studentclassify->setWindowTitle(QApplication::translate("admin_studentclassify", "admin_studentclassify", Q_NULLPTR));
        btnPersonal->setText(QApplication::translate("admin_studentclassify", "\344\270\252\344\272\272\344\270\255\345\277\203", Q_NULLPTR));
        btnSearchuser->setText(QApplication::translate("admin_studentclassify", "\350\264\246\345\217\267\347\256\241\347\220\206", Q_NULLPTR));
        btnSearchbook->setText(QApplication::translate("admin_studentclassify", "\345\233\276\344\271\246\347\256\241\347\220\206", Q_NULLPTR));
        btnClassify->setText(QApplication::translate("admin_studentclassify", "\345\210\206\347\261\273\347\256\241\347\220\206", Q_NULLPTR));
        btnLogout->setText(QApplication::translate("admin_studentclassify", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
        etClassify->setText(QApplication::translate("admin_studentclassify", "\351\200\211\346\213\251\344\270\223\344\270\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class admin_studentclassify: public Ui_admin_studentclassify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_STUDENTCLASSIFY_H
