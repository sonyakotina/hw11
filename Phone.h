#ifndef PHONE_H_
#define PHONE_H_
#include "Screen.h"
class Phone : virtual public Screen
{
    void getPicture() override{};
};
#endif
