#include "pinkoodidll.h"


QString PinkoodiDLL::rajapintafunktioPinkoodiDLL()
{
    olioUIMoottori = new UIMoottori;

    olioUIMoottori->exec();

    pinKoodi = olioUIMoottori->valitaPin();

    return pinKoodi;
}
