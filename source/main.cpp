#include <iostream>
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

    Player* player = nullptr;

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
        cout << "잘못된 입력입니다." << endl;
        return 1;
    }

    player->attack();
    player->printPlayerStatus();

    Monster* monster = new Monster("슬라임");
	cout << monster->getName() << " 몬스터와 전투를 시작합니다!" << endl;
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