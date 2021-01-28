#ifndef RFIDMOOTTORI_H
#define RFIDMOOTTORI_H

#include <QDialog>

namespace Ui {
class RFIDmoottori;
}

class RFIDmoottori : public QDialog
{
    Q_OBJECT

public:
    explicit RFIDmoottori(QWidget *parent = 0);
    ~RFIDmoottori();

private:
    Ui::RFIDmoottori *ui;
};

#endif // RFIDMOOTTORI_H
