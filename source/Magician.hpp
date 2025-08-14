#include "Player.hpp"

class Magician : public Player
{
public:
	Magician(string nickname) : Player("¸¶¹ý»ç", nickname) {}
	void attack() override;
	void attack(Monster* monster) override;
};