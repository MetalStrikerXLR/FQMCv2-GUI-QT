#ifndef LTANKWIDGET_H
#define LTANKWIDGET_H

#include <QWidget>
#include <QtGui>
#include <QtCore>

QT_BEGIN_NAMESPACE
namespace Ui { class LTankWidget; }
QT_END_NAMESPACE

class LTankWidget : public QWidget
{
    Q_OBJECT

public:
    LTankWidget(QWidget *parent = nullptr);
    ~LTankWidget();

    void setPercentage(int value);

protected:
    void paintEvent(QPaintEvent *e);

private:
    Ui::LTankWidget *ui;

    int percent = 0;
};
#endif // LTANKWIDGET_H
