#include "Warrior.hpp"	

void Warrior::attack()
{
	cout << job_name << " " << nickname << "��(��) �����մϴ�!" << endl;
}

void Warrior::attack(Monster* monster)
{
	int damage{ power - monster->getDefence() };
	if (damage <= 0)
		damage = 1;

	monster->setHP(monster->getHP() - damage);
	cout << "monster " << monster->getName() << "���� Į�� " << damage << "�� ���ظ� ������!\n";
	cout << "monster " << monster->getName() << "�� ���� ü��: " << monster->getHP() << '\n';
	if  (monster->getHP() <= 0)
		cout << job_name << " " << nickname << "�� �¸�!" << endl;
}