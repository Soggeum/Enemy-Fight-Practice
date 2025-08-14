#include "Monster.hpp"

void Monster::attack(Player* player)
{
    int damage{ power - player->getDefence() };
    if (damage <= 0)
        damage = 1;

	player->setHP(player->getHP() - damage);
    cout << "monster " << name << "이(가) " << player->getJobName() << " "
		<< player->getNickname() << "에게 " << damage << "의 데미지를 입혔습니다!" << endl; 

    cout << player->getJobName() << " " << player->getNickname() << "의 남은 체력: " << player->getHP() << endl;
    if (player->getHP() < 0)
        cout <<  "monster " << name << "의 승리!" << endl;
}

string Monster::getName() { return name; }
int Monster::getHP() { return HP; }
int Monster::getPower() { return power; }
int Monster::getDefence() { return defence; }
int Monster::getSpeed() { return speed; }

void Monster::setName(string name) { this->name = name; }
bool Monster::setHP(int HP)
{
    this->HP = (HP > 0) ? HP : 0;
    return (this->HP > 0);
}
void Monster::setPower(int power) { this->power = power; }
void Monster::setDefence(int defence) { this->defence = defence; }
void Monster::setSpeed(int speed) { this->speed = speed; }