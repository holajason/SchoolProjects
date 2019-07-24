#pragma once
#include "ship.h"

class Battle : public Ship {
private:
	int torpedoes;
    string getType(){
        return "Battle";
    }
public:
	Battle(string name, int xLoc, int yLoc, Alighnment align);
	void move();
	string status();
	int getTorpedoesCounts();
	void attack(Ship* target);
};

Battle::Battle(string name, int xLoc, int yLoc, Alighnment align) 
	: Ship(name, xLoc,yLoc, align, 100,10,10) {
	torpedoes = 1;
}

int Battle::getTorpedoesCounts() {
	return this->torpedoes;
}

void Battle::move() {
	Ship::move();
	xLoc -= 1;
	yLoc -= 1;
	if (this->getCurrentHealth() <= this->getMaxHealth()) {
		assessDamage(-1);
	}
}

string Battle::status() {
	string shipStatus = Ship::status();
	shipStatus += "Torpedoes: " + to_string(torpedoes) + '\n';
	return shipStatus;
}

void Battle::attack(Ship* target) {
	if (target->getAlign() == this->getAlign()
		&& target ->getAlign() != this->getChaoticAlign()) {
		throw invalid_argument("Cannot Attack The Same Align Player");
	}
	else if (target->getCurrentHealth() > 0	//Enemy is not dead
		&& target->getDistanceBetween(this) <= this->getRange()) { // Within the range
		if (this->torpedoes > 0) {
			target->assessDamage(this->getAttackPower() + 10);
			torpedoes -= 1;
		}
		else {
			target->assessDamage(this->getAttackPower());
		}
		Ship::attack(target);
	}
}
