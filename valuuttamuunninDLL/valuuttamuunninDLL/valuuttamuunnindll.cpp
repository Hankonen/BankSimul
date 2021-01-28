#include "valuuttamuunnindll.h"

double ValuuttamuunninDLL::muunninrajapinta(short index, double syotettysumma)
{
    oliomuunninmoottori = new muunninmoottori;

    muunnos = oliomuunninmoottori->muunnavaluutta(index, syotettysumma);

    return muunnos;
}
