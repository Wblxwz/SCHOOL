#include "School.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setWindowIcon(QIcon("./Picture/tb.png"));
    School w;
    w.show();
    return a.exec();
}
