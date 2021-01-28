#include "muunninmoottori.h"

double muunninmoottori::muunnavaluutta(short index, double syotettysumma)
{
    if (index == 0){
        muunnos = syotettysumma/kruunu;
    }
    else if(index == 1){
        muunnos = syotettysumma/punta;
    }
    else if(index == 2){
        muunnos = syotettysumma/dollari;
    }
    else if(index == 3){
        muunnos = syotettysumma/rupla;
    }
    else if(index == 4){
        muunnos = 0;
    }
    qDebug() << muunnos << "aajj" << syotettysumma;
    return muunnos;

}
