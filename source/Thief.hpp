#include "Player.hpp"

class Thief : public Player
{
public:
	Thief(string nickname) : Player("����", nickname) {}
	void attack() override;
	void attack(Monster* monster) override;
};