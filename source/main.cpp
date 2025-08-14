#include <iostream>
#include <windows.h>    // sleep()
#include "Player.hpp"
#include "Warrior.hpp"
#include "Magician.hpp"
#include "Thief.hpp"
#include "Archer.hpp"
#include "Monster.hpp"

using namespace std;

// 메인 함수
int main() {
    string jobs[] = { "전사", "마법사", "도적", "궁수" };
    int job_choice = 0;
    string nickname;

    cout << "* 닉네임을 입력해주세요: ";
    cin >> nickname;

    cout << "<전직 시스템>" << endl;
    cout << nickname << "님, 환영합니다!" << endl;
    cout << "* 원하시는 직업을 선택해주세요." << endl;

    for (int i = 0; i < 4; i++) {
        cout << (i + 1) << ". " << jobs[i] << endl;
    }

    cout << "선택: ";
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
        cout << "잘못된 입력입니다." << endl;
        return 1;
    }

    player[job_choice - 1]->attack();
    player[job_choice - 1]->printPlayerStatus();

    Monster* monster = new Monster("슬라임");
	cout << monster->getName() << " 몬스터와 전투를 시작합니다!" << endl;
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