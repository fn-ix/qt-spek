#include <QApplication>
#include "spek-spectrogram.h"
#include <fstream>
#include <QIcon> 
#include <QString> 

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    SpekSpectrogram w;
    w.show();

    if(argc < 2) return 0 ;
    std::ifstream file(argv[1]);
    w.open(argv[1]);
    
    w.setWindowIcon(QIcon::fromTheme("spek"));
    w.setWindowTitle(QString("Qt-Spek"));

    return a.exec();
}
