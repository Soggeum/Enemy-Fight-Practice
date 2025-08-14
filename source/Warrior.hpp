#include "Player.hpp"

class Warrior : public Player
{
public:
	Warrior(string nickname) : Player("ภüป็", nickname) {}
	void attack() override;
	void attack(Monster* monster) override;
};