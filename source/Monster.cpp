#include "Monster.hpp"

void Monster::attack(Player* player)
{
    int damage{ power - player->getDefence() };
    if (damage <= 0)
        damage = 1;

	player->setHP(player->getHP() - damage);
    cout << "monster " << name << "��(��) " << player->getJobName() << " "
		<< player->getNickname() << "���� " << damage << "�� �������� �������ϴ�!" << endl; 

    cout << player->getJobName() << " " << player->getNickname() << "�� ���� ü��: " << player->getHP() << endl;
    if (player->getHP() < 0)
        cout <<  "monster " << name << "�� �¸�!" << endl;
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