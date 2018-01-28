/********************************************************************************
** Form generated from reading UI file 'test.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_H
#define UI_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableBorrow;

    void setupUi(QWidget *test)
    {
        if (test->objectName().isEmpty())
            test->setObjectName(QStringLiteral("test"));
        test->resize(748, 448);
        verticalLayout = new QVBoxLayout(test);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableBorrow = new QTableWidget(test);
        if (tableBorrow->columnCount() < 4)
            tableBorrow->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableBorrow->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableBorrow->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableBorrow->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableBorrow->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableBorrow->setObjectName(QStringLiteral("tableBorrow"));

        verticalLayout->addWidget(tableBorrow);


        retranslateUi(test);

        QMetaObject::connectSlotsByName(test);
    } // setupUi

    void retranslateUi(QWidget *test)
    {
        test->setWindowTitle(QApplication::translate("test", "test", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableBorrow->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("test", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableBorrow->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("test", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableBorrow->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("test", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableBorrow->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("test", "4", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class test: public Ui_test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_H
