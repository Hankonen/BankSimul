#ifndef PINKOODIDLL_H
#define PINKOODIDLL_H

#include "pinkoodiDLL_global.h"
#include "uimoottori.h"
#include <QString>

class PinkoodiDLL
{
public:
    QString PINKOODIDLL_EXPORT rajapintafunktioPinkoodiDLL();
private:
    QString pinKoodi;
    UIMoottori *olioUIMoottori;
};

#endif // PINKOODIDLL_H
