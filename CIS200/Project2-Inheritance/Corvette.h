#pragma once
#include "ship.h"
class Corvette : public Ship {
private:
    string getType(){
        return "Corvette" ;
    }
public:
	Corvette(string name, int xLoc, int yLoc, Alighnment align)
		:Ship(name, xLoc, yLoc, align, 20, 25, 0) {}
	void move();
	void attack(Ship* target);
	string status();
};
void Corvette::move() {
	Ship::move();
	xLoc += 5;
	yLoc += 5;
	if (this->getCurrentHealth() <= this->getMaxHealth()) {
		assessDamage(-1);
	}
}

void Corvette::attack(Ship* target) {
		if (target->getCurrentHealth() > 0
		&& target->getDistanceBetween(this) <= this->getRange()
		&& target->getAlign() != this->getAlign()) {
		//Change align state
		target->changeAlign();
	}
	target->assessDamage(this->getAttackPower());
	Ship::attack(target);
}

string Corvette::status() {
	string shipStatus = Ship::status();
	return shipStatus;
}
