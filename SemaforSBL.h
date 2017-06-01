#ifndef SEMAFORSBL_H
#define SEMAFORSBL_H

/*
 *  Semafor Samoczynnej Blokady Liniowej(SBL), blokada trzystawna.
 *  Zapewne podobny można użyć przy blokadzie półsamoczynnej.
 */

class SemaforSBL
{
public:
    enum Stan {CZERWONY, POMARANCZOWY, ZIELONY, ZIELONYMIG};

private:
    Stan stan;

public:
    SemaforSBL(const Stan stan = Stan::CZERWONY);

    Stan getStan();

    void setStan(const Stan stan);
};

#endif // SEMAFORSBL_H
