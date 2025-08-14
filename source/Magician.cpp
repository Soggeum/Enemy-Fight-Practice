#include "Magician.hpp"

void Magician::attack()
{
	cout << job_name << " " << nickname << "이(가) 공격합니다!" << endl;
}

void Magician::attack(Monster* monster)
{
	int damage{ power - monster->getDefence() };
	if (damage <= 0)
		damage = 1;

	monster->setHP(monster->getHP() - damage);
	cout << "monster " << monster->getName() << "에게 마법으로 " << damage << "의 피해를 입혔다!\n";
	cout << "monster " << monster->getName() << "의 남은 체력: " << monster->getHP() << '\n';
	if (monster->getHP() <= 0)
		cout << job_name << " " << nickname << "의 승리!" << endl;
}