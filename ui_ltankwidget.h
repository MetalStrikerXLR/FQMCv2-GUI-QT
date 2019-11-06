/********************************************************************************
** Form generated from reading UI file 'ltankwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LTANKWIDGET_H
#define UI_LTANKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LTankWidget
{
public:

    void setupUi(QWidget *LTankWidget)
    {
        if (LTankWidget->objectName().isEmpty())
            LTankWidget->setObjectName(QString::fromUtf8("LTankWidget"));
        LTankWidget->resize(286, 318);
        LTankWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        retranslateUi(LTankWidget);

        QMetaObject::connectSlotsByName(LTankWidget);
    } // setupUi

    void retranslateUi(QWidget *LTankWidget)
    {
        LTankWidget->setWindowTitle(QCoreApplication::translate("LTankWidget", "LTankWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LTankWidget: public Ui_LTankWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LTANKWIDGET_H
