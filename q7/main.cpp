#include <iostream>
#include "Status.h"

int main() {
	int lv;
	Status st;

	std::cout << "ƒŒƒxƒ‹‚ð“ü—ÍË";
	std::cin >> lv;

	st.SetLv(lv);
	st.Calc();

	std::cout << " ‚g‚o = " << st.GetHp() << "\n";
	std::cout << "UŒ‚—Í= " << st.GetAtk() << "\n";
	std::cout << "–hŒä—Í= " << st.GetDef() << "\n";
}