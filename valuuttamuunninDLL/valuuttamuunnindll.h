#ifndef VALUUTTAMUUNNINDLL_H
#define VALUUTTAMUUNNINDLL_H

#include "valuuttamuunninDLL_global.h"
#include "muunninmoottori.h"
class ValuuttamuunninDLL
{
public:
    double VALUUTTAMUUNNINDLL_EXPORT muunninrajapinta(short index, double syotettysumma);
private:
    muunninmoottori *oliomuunninmoottori;
    double muunnos;
};

#endif // VALUUTTAMUUNNINDLL_H
