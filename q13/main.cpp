#include "Calclation.h"


void SetX(float a, float b, Calclation* x);
void SetY(float a, float b, Calclation* y);



int main()
{
	Calclation* x = new Calclation();

	SetX(5.0, 10.0, x);
	x->Disp();
	delete x;

	Calclation* y = new Calclation();
	SetY(8.0, 3.0, y);
	y->Disp();
	delete y;
}


void SetX(float a, float b,Calclation* x)
{
	x->SetA(a);
	x->SetB(b);
}


void SetY(float a, float b,Calclation* y)
{
	y->SetA(a);
	y->SetB(b);
}
