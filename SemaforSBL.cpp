#include "SemaforSBL.h"




SemaforSBL::SemaforSBL(const SemaforSBL::Stan stan)
{
    this->stan = stan;
}


SemaforSBL::Stan SemaforSBL::getStan() {
    return this->stan;
}

void SemaforSBL::setStan(const Stan stan) {
    this->stan = stan;
}
