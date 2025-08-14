#include "Archer.hpp"

void Archer::attack()
{
	cout << job_name << " " << nickname << "��(��) �����մϴ�!" << endl;
}

void Archer::attack(Monster* monster)
{
	int damage{ power - monster->getDefence() };
	if (damage >= 3)
		damage /= 3;
	else
		damage = 1;

	for (int i = 0; i < 3; i++) {
		monster->setHP(monster->getHP() - damage);
		cout << "monster " << monster->getName() << "���� Ȱ�� " << damage << "�� ���ظ� ������!\n";
	}

	cout << "monster " << monster->getName() << "�� ���� ü��: " << monster->getHP() << '\n';
	if (monster->getHP() <= 0)
		cout << job_name << " " << nickname << "�� �¸�!" << endl;
}