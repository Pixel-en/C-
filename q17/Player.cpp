#include "Player.h"

Player::Player()
{
    hp = 300;
    atk = 50;
    def = 35;
}

void Player::DispHp()
{
    cout << "�v���C���[�g�o��" << hp << "\n";
}

int Player::Attack(int i)
{
    printf("�v���C���[�̍U���I ");
    return atk - i / 2;
}

void Player::Damage(int i)
{
    cout << "�v���C���[��" << i << "�̃_���[�W\n";
    hp -= i;
}
