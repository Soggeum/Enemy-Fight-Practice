#include <iostream>
#include "Player.hpp"
#include "Warrior.hpp"
#include "Magician.hpp"
#include "Thief.hpp"
#include "Archer.hpp"
#include "Monster.hpp"

using namespace std;

// ���� �Լ�
int main() {
    string jobs[] = { "����", "������", "����", "�ü�" };
    int job_choice = 0;
    string nickname;

    Player* player = nullptr;

    cout << "* �г����� �Է����ּ���: ";
    cin >> nickname;

    cout << "<���� �ý���>" << endl;
    cout << nickname << "��, ȯ���մϴ�!" << endl;
    cout << "* ���Ͻô� ������ �������ּ���." << endl;

    for (int i = 0; i < 4; i++) {
        cout << (i + 1) << ". " << jobs[i] << endl;
    }

    cout << "����: ";
    cin >> job_choice;

    switch (job_choice) {
    case 1:
        player = new Warrior(nickname);
        break;
    case 2:
        player = new Magician(nickname);
        break;
    case 3:
        player = new Thief(nickname);
        break;
    case 4:
        player = new Archer(nickname);
        break;
    default:
        cout << "�߸��� �Է��Դϴ�." << endl;
        return 1;
    }

    player->attack();
    player->printPlayerStatus();

    Monster* monster = new Monster("������");
	cout << monster->getName() << " ���Ϳ� ������ �����մϴ�!" << endl;
    do {
        player->attack(monster);
        if (monster->getHP() == 0)         
            break;
        monster->attack(player);
    } 
    while ((player->getHP()) && monster->getHP());

    delete player;
    delete monster;

    return 0;
}