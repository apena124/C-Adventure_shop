#include "Armor.h"
Armor::Armor() { newDurability = 0.0; newPrice = 0; } //consturctor

//accessor functions
string Armor::getNewName() const {
	return newName;
}

double Armor::getNewDurability()const {
	return newDurability;
}

double Armor::getNewPrice()const {
	return newPrice;
}

//mutator functions
void Armor::setNewName(string name) {
	newName = name;
}

void Armor::setNewDurability(double durability) {
	newDurability = durability;
}

void Armor::setNewPrice(double price) {
	newPrice = price;
}