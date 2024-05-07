#include "Status.h"

bool Status::SetLv(int i)
{
    if (i <= 0)
        return false;

    lv = i;

    if (i >= 100)
        lv = 99;
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
