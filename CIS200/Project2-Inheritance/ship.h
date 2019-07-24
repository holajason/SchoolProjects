#pragma once
#include <iostream>
#include <string>
#include <typeinfo>
#include <algorithm>
#include "math.h"

using namespace std;
enum Alighnment{us, them, chaotic};

class Ship {
private:
    string name;
	Alighnment align;
	int range;
	int maxHealth;
	int attackPower;
	int currentHealth;
	string virtual getType();
protected:
	int xLoc, yLoc;
public:
	Ship(string name, int x, int y, Alighnment align, int maxHealth, int range, int attackPower);
	string status();
	string getName();
	int getX();
	int getY();
	int getRange();
	int getMaxHealth();
	int getAttackPower();
	int getCurrentHealth();
	double getDistanceBetween(Ship* target);
	void changeAlign();
	void virtual move();
	void setCurrentHealt(int hp);
	void assessDamage(int amt);
	void virtual attack(Ship* target);
	Alighnment getAlign();
	Alighnment getChaoticAlign();
};

//https://stackoverflow.com/questions/3649278/how-can-i-get-the-class-name-from-a-c-object/36794846
inline string Ship::getType(){
	//return (string)typeid(*this).name() + " Ship";
    return string();
}

inline Ship::Ship(string name, int x, int y, Alighnment align, int maxHealth, int range, int attackPower) {
	this->name = name;
	this->xLoc = x;
	this->yLoc = y;
	this->align = align;
	this->currentHealth = maxHealth;
	this->range = range;
	this->attackPower = attackPower;
	this->maxHealth = maxHealth;
}

string Ship::status() {
	string shipStatus = " ";
	shipStatus = "Name: " + name + "\n";
	shipStatus += "Type: " + getType() + "\n";
	shipStatus += "Health: "  + to_string(currentHealth) + "\n";
	shipStatus += "Location: " + to_string(xLoc)+ ", " + to_string(yLoc) +'\n' ;
	return shipStatus;
}

string Ship::getName() { return this->name; }

int Ship::getX() { return xLoc; }

int Ship::getY() { return yLoc;}

int Ship::getRange() { return this->range; }

int Ship::getMaxHealth() { return this->maxHealth; }

int Ship::getAttackPower() { return attackPower; }

inline void Ship::move() {
	if (this->getCurrentHealth() == 0) {
		throw invalid_argument("Unable to Move at 0 HP");
	}
}

inline void Ship::attack(Ship* target) {
	if (target->getCurrentHealth() <= 0) {
		throw invalid_argument("Target has been Destroyed!");
	}
}

inline Alighnment Ship::getAlign(){	return this->align;}

inline Alighnment Ship::getChaoticAlign() {
    if (align == chaotic){}
    return chaotic;
}

void Ship::assessDamage(int amt) { currentHealth -= amt; }

int Ship::getCurrentHealth() {
	if (currentHealth <= 0) {
		currentHealth = 0;
	}
	return this->currentHealth;
}

void Ship::changeAlign() {
	if (this->align == us) {
		align = them;
	}
	else if (this->align == them) {
		align = us;
	}
}

//For unit testing
void Ship::setCurrentHealt(int hp) {
	this->currentHealth = hp;
}

//https://www.geeksforgeeks.org/program-calculate-distance-two-points/
double Ship::getDistanceBetween(Ship* target) {
	double distance;
	distance = sqrt(pow(getX() - target->getX(), 2) + pow(getY() - target->getY(), 2));
	if (this->range < distance) {
		throw invalid_argument("Target Too Far Away");
	}
	return distance;
}
