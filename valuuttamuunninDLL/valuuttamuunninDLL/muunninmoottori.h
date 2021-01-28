#ifndef MUUNNINMOOTTORI_H
#define MUUNNINMOOTTORI_H
#include <QDebug>

class muunninmoottori
{
public:
    double muunnavaluutta(short index, double syotettysumma);
private:
    double muunnos;
    double kruunu = 10.93;
    double punta = 0.87;
    double dollari = 1.09;
    double rupla = 80.92;
};

#endif // MUUNNINMOOTTORI_H
