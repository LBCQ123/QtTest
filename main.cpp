#include <QCoreApplication>
#include <iostream>
#include <QDebug>
#include "Express.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    IExpress* express = Analysis("a+b-c+e-f");
    QMap<QString,int> map;
    map.insert("a",5);
    map.insert("b",4);
    map.insert("c",2);
    map.insert("e",10);
    map.insert("f",1);


    qDebug() << express->Interpret(map);

    delete express;
    qDebug("over,hello233");
    return a.exec();
}

/////////////////////////////策略模式Strategy/////////////////////////////
//#include "taxstrategy.h"
//QString use("中国税法");
//SalesOrder* order;
//if(use == "德国税法")
//{
//    //使用德国税法
//    order = new SalesOrder(new DeTax);
//}
//else if(use == "中国税法")
//{
//    //使用中国税法
//    order = new SalesOrder(new CNTax);
//}
//else {
//    order = new SalesOrder(new USTax);
//}
////后续使用
//order->doWork();



////////////////////////////观察者模式Observer/////////////////
//#include "observer.h"
//worker worker;
//worker.addFace(new printDot);
//worker.addFace(new printNumber);
//worker.addFace(new printDot);
//worker.doWorker();




////////////////////////装饰模式////////////////////////
//#include "decorator.h"
//speakOne one;       //能说1
//speakPre pre(&one); //能说a1
//speakSuf speak(&pre);//能说a1$
//qDebug() << speak.getResult();

///////////////////////桥模式/////////////////////////////
//#include "bridge.h"
//Implementor* imp = new MobileImp;       //底层逻辑
//Abstraction* user = new payingUser(imp);//业务逻辑
//user->mprintf();                        //功能调用
