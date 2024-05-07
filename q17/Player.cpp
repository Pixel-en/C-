#include "Player.h"

Player::Player()
{
    hp = 300;
    atk = 50;
    def = 35;
}

void Player::DispHp()
{
    cout << "プレイヤーＨＰ＝" << hp << "\n";
}

int Player::Attack(int i)
{
    printf("プレイヤーの攻撃！ ");
    return atk - i / 2;
}

void Player::Damage(int i)
{
    cout << "プレイヤーは" << i << "のダメージ\n";
    hp -= i;
}
