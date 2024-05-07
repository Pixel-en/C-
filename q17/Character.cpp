#include "Character.h"

Character::Character()
{
    hp = 0;
    atk = 0;
    def = 0;
}

void Character::DispHp()
{
    cout << "�g�o��" << hp << "\n";
}

int Character::Attack(int i)
{
    printf("�U���I ");
    return atk - i / 2;
}

void Character::Damage(int i)
{
    cout << "" << i << "�̃_���[�W\n";
    hp -= i;
}

int Character::GetDef()
{
    return def;
}

bool Character::IsDead()
{
    if (hp <= 0)
        return true;

    return false;
}
