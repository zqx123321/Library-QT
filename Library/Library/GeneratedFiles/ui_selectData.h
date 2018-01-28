/********************************************************************************
** Form generated from reading UI file 'selectData.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTDATA_H
#define UI_SELECTDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selectData
{
public:
    QFrame *frame;
    QLabel *label;
    QPushButton *btnInitial;
    QPushButton *btnRandom;
    QPushButton *btnNormal;

    void setupUi(QWidget *selectData)
    {
        if (selectData->objectName().isEmpty())
            selectData->setObjectName(QStringLiteral("selectData"));
        selectData->resize(200, 300);
        frame = new QFrame(selectData);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 200, 300));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 91, 21));
        label->setStyleSheet(QString::fromUtf8("color:#808080;\n"
"border:none;\n"
"font-size:18px;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align:left;"));
        btnInitial = new QPushButton(frame);
        btnInitial->setObjectName(QStringLiteral("btnInitial"));
        btnInitial->setGeometry(QRect(40, 60, 111, 41));
        btnRandom = new QPushButton(frame);
        btnRandom->setObjectName(QStringLiteral("btnRandom"));
        btnRandom->setGeometry(QRect(40, 120, 111, 41));
        btnNormal = new QPushButton(frame);
        btnNormal->setObjectName(QStringLiteral("btnNormal"));
        btnNormal->setGeometry(QRect(40, 180, 111, 41));

        retranslateUi(selectData);

        QMetaObject::connectSlotsByName(selectData);
    } // setupUi

    void retranslateUi(QWidget *selectData)
    {
        selectData->setWindowTitle(QApplication::translate("selectData", "selectData", Q_NULLPTR));
        label->setText(QApplication::translate("selectData", "\351\200\211\346\213\251\346\225\260\346\215\256\346\272\220", Q_NULLPTR));
        btnInitial->setText(QApplication::translate("selectData", "\345\210\235\345\247\213\346\225\260\346\215\256", Q_NULLPTR));
        btnRandom->setText(QApplication::translate("selectData", "\351\232\217\346\234\272\347\224\237\346\210\220", Q_NULLPTR));
        btnNormal->setText(QApplication::translate("selectData", "\346\255\243\345\270\270\346\225\260\346\215\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class selectData: public Ui_selectData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTDATA_H
