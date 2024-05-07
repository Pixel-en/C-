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
    cout << "�G�g�o��" << hp << "\n";
}

int Enemy::Attack(int i)
{
    printf("�G�̍U���I ");
    return atk - i / 2;
}

void Enemy::Damage(int i)
{
    cout << "�G��" << i << "�̃_���[�W\n";
    hp -= i;
}
