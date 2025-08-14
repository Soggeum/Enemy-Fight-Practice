#include <iostream>
#include <windows.h>    // sleep()
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

    Player* player[4]{};
    switch (job_choice) {
    case 1:
        player[0] = new Warrior(nickname);
        break;
    case 2:
        player[1] = new Magician(nickname);
        break;
    case 3:
        player[2] = new Thief(nickname);
        break;
    case 4:
        player[3] = new Archer(nickname);
        break;
    default:
        cout << "�߸��� �Է��Դϴ�." << endl;
        return 1;
    }

    player[job_choice - 1]->attack();
    player[job_choice - 1]->printPlayerStatus();

    Monster* monster = new Monster("������");
	cout << monster->getName() << " ���Ϳ� ������ �����մϴ�!" << endl;
    Sleep(500);

    do {
        player[job_choice - 1]->attack(monster);
        Sleep(500);
        if (monster->getHP() == 0)         
            break;

        monster->attack(player[job_choice - 1]);
        Sleep(500);
    } 
    while ((player[job_choice - 1]->getHP()) && monster->getHP());

    delete player[job_choice - 1];
    delete monster;

    return 0;
}