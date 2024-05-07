#include <iostream>
#include "Data.h"

int main() {

	int i;
	std::cin >> i;

	Data x;

	x.SetValue(i);
	x.Disp();

}