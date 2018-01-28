/********************************************************************************
** Form generated from reading UI file 'admin_bookdetail.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_BOOKDETAIL_H
#define UI_ADMIN_BOOKDETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_bookdetail
{
public:
    QFrame *frame;
    QTableWidget *tableWidget;

    void setupUi(QWidget *admin_bookdetail)
    {
        if (admin_bookdetail->objectName().isEmpty())
            admin_bookdetail->setObjectName(QStringLiteral("admin_bookdetail"));
        admin_bookdetail->resize(488, 365);
        admin_bookdetail->setMaximumSize(QSize(488, 365));
        frame = new QFrame(admin_bookdetail);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(-10, 0, 501, 371));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        tableWidget = new QTableWidget(frame);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 0, 491, 371));

        retranslateUi(admin_bookdetail);

        QMetaObject::connectSlotsByName(admin_bookdetail);
    } // setupUi

    void retranslateUi(QWidget *admin_bookdetail)
    {
        admin_bookdetail->setWindowTitle(QApplication::translate("admin_bookdetail", "admin_bookdetail", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("admin_bookdetail", "\345\211\257\346\234\254\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("admin_bookdetail", "\347\212\266\346\200\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("admin_bookdetail", "\346\211\200\345\261\236\345\255\246\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("admin_bookdetail", "\345\272\224\350\277\230\346\227\245\346\234\237", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("admin_bookdetail", "\345\210\240\351\231\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class admin_bookdetail: public Ui_admin_bookdetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_BOOKDETAIL_H
