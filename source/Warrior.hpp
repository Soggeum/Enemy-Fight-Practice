#include "Player.hpp"

class Warrior : public Player
{
public:
	Warrior(string nickname) : Player("����", nickname) {}
	void attack() override;
	void attack(Monster* monster) override;
};