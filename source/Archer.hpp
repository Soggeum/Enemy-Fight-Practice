#include "Player.hpp"

class Archer : public Player
{
public:
	Archer(string nickname) : Player("±Ã¼ö", nickname) {}
	void attack() override;
	void attack(Monster* monster) override;
};