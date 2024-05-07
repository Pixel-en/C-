#pragma once
#include "Character.h"
class Player :
    public Character
{
public:

	Player();
	void DispHp() override;
	int Attack(int i) override;
	void Damage(int i) override;
};

