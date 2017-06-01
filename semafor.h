#ifndef SEMAFOR_H
#define SEMAFOR_H


class semafor
{
public:
    semafor();
    enum Stan {CZERWONY,ZOLTY,ZIELONY};
    void ustawStan(semafor::Stan);
};

#endif // SEMAFOR_H
