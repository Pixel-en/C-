#include <iostream>
#include "Status.h"

int main() {
	
	int lv;
	Status st;

	while (true) {
		std::cout << "ƒŒƒxƒ‹‚ð“ü—ÍË";
		std::cin >> lv;

		if (!st.SetLv(lv))	break;
		st.Calc();

		std::cout << " ‚g‚o = " << st.GetHp() << "\n";
		std::cout << "UŒ‚—Í= " << st.GetAtk() << "\n";
		std::cout << "–hŒä—Í= " << st.GetDef() << "\n";
	}

	std::cout << "ƒvƒƒOƒ‰ƒ€‚ðI—¹‚µ‚Ü‚·\n";
}