//QT的helloworld

#include<QApplication>
#include<QLabel>
#include<QString>
#include<QtDebug>
#include<QTime>

int main(int argc,char * argv[])
{
    QApplication a(argc,argv);

    QLabel label("hello world");
    label.show();//显示控件

    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
    int i;
    QString str;
    for(i = 0; i < 10; i++)
    {
        str += QString("%1 ").arg(qrand()%10);
    }

    qDebug()<<str;



    return a.exec();

}
