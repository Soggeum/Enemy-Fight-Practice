#include "Thief.hpp"

void Thief::attack()
{
	cout << job_name << " " << nickname << "��(��) �����մϴ�!" << endl;
}

void Thief::attack(Monster* monster)
{
	int damage{ power - monster->getDefence() };
	if (damage >= 5)
		damage /= 5;
	else 
		damage = 1;

	for (int i = 0; i < 5; i++) {
		monster->setHP(monster->getHP() - damage);
		cout << "monster " << monster->getName() << "���� ǥâ���� " << damage << "�� ���ظ� ������!\n";
	}

	cout << "monster " << monster->getName() << "�� ���� ü��: " << monster->getHP() << '\n';
	if (monster->getHP() <= 0)
		cout << job_name << " " << nickname << "�� �¸�!" << endl;
}