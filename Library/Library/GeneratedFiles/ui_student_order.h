/********************************************************************************
** Form generated from reading UI file 'student_order.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_ORDER_H
#define UI_STUDENT_ORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_student_order
{
public:

    void setupUi(QWidget *student_order)
    {
        if (student_order->objectName().isEmpty())
            student_order->setObjectName(QStringLiteral("student_order"));
        student_order->resize(400, 300);

        retranslateUi(student_order);

        QMetaObject::connectSlotsByName(student_order);
    } // setupUi

    void retranslateUi(QWidget *student_order)
    {
        student_order->setWindowTitle(QApplication::translate("student_order", "student_order", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class student_order: public Ui_student_order {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_ORDER_H
