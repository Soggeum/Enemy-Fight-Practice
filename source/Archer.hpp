#include "Player.hpp"

class Archer : public Player
{
public:
	Archer(string nickname) : Player("�ü�", nickname) {}
	void attack() override;
	void attack(Monster* monster) override;
};