#include <iostream>
#include <iomanip>
#include "Fat.h"

void Fat::SetName(const char* _n)
{
    name = _n;
}

void Fat::SetHeight(float _h)
{
    height = _h;
}

void Fat::SetWeight(float _w)
{
    weight = _w;
}

void Fat::Calc()
{
    BMI = weight / (height * height);
}

float Fat::GetBMI()
{
    return BMI;
}

void Fat::Disp()
{
    std::cout << name << "‚ÌBMI‚Í" << std::setprecision(4) << BMI << "‚Å‚·\n";
}
