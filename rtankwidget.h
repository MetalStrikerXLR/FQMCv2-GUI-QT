#ifndef RTANKWIDGET_H
#define RTANKWIDGET_H

#include <QWidget>
#include <QtGui>
#include <QtCore>

QT_BEGIN_NAMESPACE
namespace Ui { class RTankWidget; }
QT_END_NAMESPACE

class RTankWidget : public QWidget
{
    Q_OBJECT

public:
    RTankWidget(QWidget *parent = nullptr);
    ~RTankWidget();

    void setPercentage(int value);

protected:
    void paintEvent(QPaintEvent *e);

private:
    Ui::RTankWidget *ui;

    int percent = 0;
};
#endif // RTANKWIDGET_H
