#pragma once
#include <iostream>

using namespace std;

class Character
{
protected:
	int hp;
	int atk;
	int def;

public:
	Character();
	virtual void DispHp();
	virtual int Attack(int i);
	virtual void Damage(int i);
	int GetDef();
	bool IsDead();
};

