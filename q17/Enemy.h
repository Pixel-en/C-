#pragma once
#include "Character.h"
class Enemy :
    public Character
{
public:

	Enemy();
	void DispHp() override;
	int Attack(int i) override;
	void Damage(int i) override;
};

