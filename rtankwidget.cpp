#include "rtankwidget.h"
#include "ui_rtankwidget.h"

RTankWidget::RTankWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RTankWidget)
{
    ui->setupUi(this);
}

RTankWidget::~RTankWidget()
{
    delete ui;
}

void RTankWidget::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    painter.setWindow(QRect(0,0,280,260));

    QPen drawpen(Qt::cyan); drawpen.setWidth(6); drawpen.setCapStyle(Qt::RoundCap);
    QBrush fbrush(QColor(99,99,99));
    QBrush hbrush(Qt::black);

    //////////////////////////////////////////////////////
    QPoint p1; p1.setX(10); p1.setY(10);
    QPoint p2; p2.setX(10); p2.setY(250);
    QPoint p3; p3.setX(270); p3.setY(250);
    QPoint p4; p4.setX(270); p4.setY(150);

    QPoint hp1; hp1.setX(10); hp1.setY(10);
    QPoint hp2; hp2.setX(270); hp2.setY(150);
    QPoint hp3; hp3.setX(270); hp3.setY(10);

    QPoint fp1; fp1.setX(10); fp1.setY(int((-2.4*percent) +250));
    QPoint fp2; fp2.setX(10); fp2.setY(250);
    QPoint fp3; fp3.setX(270); fp3.setY(250);
    QPoint fp4; fp4.setX(270); fp4.setY(int((-2.4*percent) +250));

    //////////////////////////////////////////////////////
    QPolygon wing;
    wing << p1;
    wing << p2;
    wing << p3;
    wing << p4;

    QPolygon hidearea;
    hidearea << hp1;
    hidearea << hp2;
    hidearea << hp3;

    QPolygon fillarea;
    fillarea << fp1;
    fillarea << fp2;
    fillarea << fp3;
    fillarea << fp4;

    //////////////////////////////////////////////////////
    QPainterPath fpath;
    QPainterPath hpath;

    fpath.addPolygon(fillarea);
    painter.fillPath(fpath, fbrush);
    hpath.addPolygon(hidearea);
    painter.fillPath(hpath, hbrush);

    //////////////////////////////////////////////////////
    painter.setPen(drawpen);
    painter.drawPolygon(wing);

    update();
}

void RTankWidget::setPercentage(int value)
{
    percent = value;
}
