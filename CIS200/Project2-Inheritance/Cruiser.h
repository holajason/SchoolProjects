#pragma once
#include "battleShip.h"

class Cruiser :public Ship {
private:
    string getType(){
        return "Cruiser" ;
    }
protected:
//https://github.com/VeeramHirekhan/TrekWarz/blob/master/Crusier.h
	Cruiser(string name, int xLoc, int yLoc, Alighnment align, int maxHealth, int range, int attackPower) :
		Ship(name, xLoc, yLoc, align, maxHealth, range, attackPower) {}
public:
	Cruiser(string name, int xLoc, int yLoc, Alighnment align)
		:Ship(name, xLoc, yLoc, align, 50, 50, 5) {}
	void move();
	void attack(Ship* target);
	string status();
};

void Cruiser::move() {
	Ship::move();
	xLoc += 1;
	yLoc += 2;
	if (this->getCurrentHealth() <= this->getMaxHealth()) {
		assessDamage(-1);
	}
}

void Cruiser::attack(Ship* target) {
	//not in the same align, ingore if align is chaotic
	if (target->getAlign() != this->getChaoticAlign()
		&& target->getAlign() == this->getAlign()) {
		throw invalid_argument("Cannot Attack The Same Align Player");
	}
	else if (this->getCurrentHealth() > 0
		&& target->getCurrentHealth() >= 0
		&& target->getDistanceBetween(this) <= this->getRange()) {
		target->assessDamage(this->getAttackPower());
		Ship::attack(target);
	}
}

string Cruiser::status() {
	string shipStatus = Ship::status();
	return shipStatus;
}
