#include "mainwindow.h"


QT_CHARTS_USE_NAMESPACE

QT_CHARTS_USE_NAMESPACE
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow window;


    //here all points
    QLineSeries *series= new QLineSeries;
    series->append(0,0);
//    series->append(1,1);
//    series->append(2,2);
//    series->append(3,3);
//    series->append(4,4);
//    series->append(5,5);



    QChart *chart=new QChart();

    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    //шрифт
    QFont font;
    font.setPixelSize(18);
    chart->setTitleFont(font);
    chart->setTitleBrush(QBrush(3));
    chart->setTitle("Answer");
    //pen
    QPen pen(QRgb(0x00000));
    pen.setWidth(5);
    series->setPen(pen);
    chart->setAnimationOptions(QChart::AllAnimations);
//QTime::currentTime().toString()
    QCategoryAxis *axisX = new QCategoryAxis();
    axisX->append("0",0);
//    axisX->append("1",1);
//    axisX->append("2",2);
//    axisX->append("3",3);
//    axisX->append("4",4);
//    axisX->append("5",5);

    chart->setAxisX(axisX, series);

    QChartView *chartView=new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    window.setCentralWidget(chartView);
    window.resize(420,300);
    window.show();

    //testing area
    series->append(1,1);
    series->append(2,2);
    series->append(3,3);
    series->append(4,4);
    series->append(5,5);
    axisX->append("1",1);
    axisX->append("2",2);
    axisX->append("3",3);
    axisX->append("4",4);
    axisX->append("5",5);
    //

    chartView->repaint();
    /*for(int i=1;i<40;i++){
        series->append(i,i);
        axisX->append("sas",i);
    }*/
    a.exec();




    return  0;
}
