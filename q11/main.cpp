#include <iostream>
#include "Player.h"
#include "Enemy.h"

int main() {
	Player pl;
	Enemy ene;

	int damage;

	for (int turn = 1;; turn++) {
		std::cout << "\n" << turn << "ƒ^[ƒ“–Ú\n";

		pl.DispHp();
		ene.DispHp();

		damage = pl.Attack(ene.GetDef());
		ene.Damage(damage);
		if (ene.IsDead())		break;

		damage = ene.Attack(pl.GetDef());
		pl.Damage(damage);
		if (pl.IsDead())		break;

	}

	cout << "I—¹\n";
}