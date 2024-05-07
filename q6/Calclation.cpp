#include <iostream>
#include "Calclation.h"

void Calclation::SetA(float a)
{
	A = a;
}

void Calclation::SetB(float b)
{
	B = b;
}

void Calclation::Disp()
{
	std::cout << A << " + " << B << " = " << A + B << "\n";;
	std::cout << A << " - " << B << " = " << A - B << "\n";
}
