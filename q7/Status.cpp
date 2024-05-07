#include "Status.h"

void Status::SetLv(int i)
{
    lv = i;
}

void Status::Calc()
{
    hp = lv * lv + 50;
    atk = lv * 10;
    def = lv * 9;
}

int Status::GetHp()
{
    return hp;
}

int Status::GetAtk()
{
    return atk;
}

int Status::GetDef()
{
    return def;
}
