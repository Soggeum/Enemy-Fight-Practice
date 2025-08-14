#include "Player.hpp"

void Player::printPlayerStatus() 
{
    cout << "------------------------------------" << endl;
    cout << "* ���� �ɷ�ġ" << endl;
    cout << "�г���: " << nickname << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "���ݷ�: " << power << endl;
    cout << "����: " << defence << endl;
    cout << "��Ȯ��: " << accuracy << endl;
    cout << "�ӵ�: " << speed << endl;
    cout << "------------------------------------" << endl;
}


Player::Player(string nickname) : job_name("�ʺ���"), nickname(nickname), level(1), HP(80), MP(50), power(30), defence(5), accuracy(80), speed(10) {}
Player::Player(string job_name, string nickname) : job_name(job_name), nickname(nickname), level(1), HP(80), MP(50), power(30), defence(5), accuracy(80), speed(10) {}

// getter �Լ�
string Player::getJobName() { return job_name; }
string Player::getNickname() { return nickname; }
int Player::getLevel() { return level; }
int Player::getHP() { return HP; }
int Player::getMP() { return MP; }
int Player::getPower() { return power; }
int Player::getDefence() { return defence; }
int Player::getAccuracy() { return accuracy; }
int Player::getSpeed() { return speed; }

// setter �Լ�
void Player::setNickname(string nickname) { this->nickname = nickname; }
bool Player::setHP(int HP) 
{ 
    this->HP = (HP > 0) ? HP: 0;
    return (this->HP > 0);
}
bool Player::setMP(int MP) 
{ 
    this->MP = (MP > 0) ? MP : 0;
    return (this->MP > 0);
}
void Player::setPower(int power) { this->power = power; }
void Player::setDefence(int defence) { this->defence = defence; }
void Player::setAccuracy(int accuracy) { this->accuracy = accuracy; }
void Player::setSpeed(int speed) { this->speed = speed; }