#include "Game.h"
#include "Enemy.h"
#include "Player.h"

void Game::GameLoop()
{
	Player pl;
	Enemy ene;

	int damage;

	for (int turn = 1;; turn++) {
		std::cout << "\n������������" << turn << "�^�[���ځ�����������\n";

		pl.DispHp();
		ene.DispHp();

		damage = pl.Attack(ene.GetDef());
		ene.Damage(damage);
		if (ene.IsDead())		break;

		damage = ene.Attack(pl.GetDef());
		pl.Damage(damage);
		if (pl.IsDead())		break;

	}

	cout << "�I��\n";
}
