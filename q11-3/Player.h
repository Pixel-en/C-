#pragma once
#include <iostream>

using namespace std;

class Player
{
	int hp;
	int atk;
	int def;

public:
	Player();
	void DispHp();
	int Attack(int i);
	void Damage(int i);
	int GetDef();
	bool IsDead();
};

