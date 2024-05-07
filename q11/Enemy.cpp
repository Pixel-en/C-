#include <iostream>
#include "Enemy.h"

using namespace std;

Enemy::Enemy()
{
    hp = 200;
    atk = 35;
    def = 40;
}

void Enemy::DispHp()
{
    cout << "“G‚g‚o" << hp << "\n";
}

int Enemy::Attack(int i)
{
    printf("“G‚ÌUŒ‚I ");
    return atk - i / 2;
}

void Enemy::Damage(int i)
{
    cout << "“G‚Í" << i << "‚Ìƒ_ƒ[ƒW\n";
    hp -= i;
}

int Enemy::GetDef()
{
    return def;
}

bool Enemy::IsDead()
{
    if (hp <= 0)
        return true;

    return false;
}
