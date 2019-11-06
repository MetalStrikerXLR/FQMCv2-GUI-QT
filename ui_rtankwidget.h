/********************************************************************************
** Form generated from reading UI file 'rtankwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RTANKWIDGET_H
#define UI_RTANKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RTankWidget
{
public:

    void setupUi(QWidget *RTankWidget)
    {
        if (RTankWidget->objectName().isEmpty())
            RTankWidget->setObjectName(QString::fromUtf8("RTankWidget"));
        RTankWidget->resize(286, 318);
        RTankWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        retranslateUi(RTankWidget);

        QMetaObject::connectSlotsByName(RTankWidget);
    } // setupUi

    void retranslateUi(QWidget *RTankWidget)
    {
        RTankWidget->setWindowTitle(QCoreApplication::translate("RTankWidget", "RTankWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RTankWidget: public Ui_RTankWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RTANKWIDGET_H
