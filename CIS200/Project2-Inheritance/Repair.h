#pragma once
#include "Cruiser.h"
class Repair : public Cruiser {
public:
	Repair(string name, int xLoc, int yLoc, Alighnment align)
		:Cruiser(name, xLoc, yLoc,align, 20,25,0){
	}
    
	void attack(Ship *target) {
		if (target->getAlign() != this->getAlign()) {
			throw invalid_argument("Cannot Repair Oppsite Align Ship");
		}
		else if (target->getCurrentHealth() == 0) {
			throw invalid_argument("Cannot Repair at 0 HP");
		}
        else if (target->getCurrentHealth() < target->getMaxHealth()
            && target->getDistanceBetween(this) < this->getRange()) {
			target->assessDamage(-(target->getMaxHealth() -  target->getCurrentHealth()));
		}
	}

	//Move at 1,1
	void move() {
		Ship::move();
		xLoc += 1;
		yLoc += 1;
		if (this->getCurrentHealth() < this->getMaxHealth()) {
			assessDamage(-1);
		}
	}
};
