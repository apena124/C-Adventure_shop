#include "Weapons.h"
Weapons::Weapons() { newDamage = 0.0; newDurability = 0.0; newPrice = 0; }

string Weapons::getNewName()const {
	return newName;
}

double Weapons::getNewDamage()const {
	return newDamage;
}

double Weapons::getNewDurability()const {
	return newDurability;
}

double Weapons::getNewPrice()const {
	return newPrice;
}

void Weapons::setNewName(string name) {
	newName = name;
}

void Weapons::setNewDamage(double damage) {
	newDamage = damage;
}

void Weapons::setNewDurability(double durability) {
	newDurability = durability;
}

void Weapons::setNewPrice(double price) {
	newPrice = price;
}