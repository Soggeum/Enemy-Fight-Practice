#include "Player.hpp"

class Magician : public Player
{
public:
	Magician(string nickname) : Player("������", nickname) {}
	void attack() override;
	void attack(Monster* monster) override;
};