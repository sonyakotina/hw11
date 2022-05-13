#ifndef PC_H_
#define PC_H_
#include "Screen.h"
#include "Keyboard.h"
class Pc : virtual public Screen, virtual public Keyboard
{
    void getPicture() override {};
    bool spacebarIsPressed() override {};
};
#endif
