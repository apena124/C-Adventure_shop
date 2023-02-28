#include "Tools.h"

Tools::Tools() { newDurability = 0.0; newPrice = 0; }

string Tools::getNewName()const {
	return newName;
}

double Tools::getNewDurability()const {
	return newDurability;
}

double Tools::getNewPrice()const {
	return newPrice;
}

void Tools::setNewName(string name) {
	newName = name;
}

void Tools::setNewDurability(double durability) {
	newDurability = durability;
}

void Tools::setNewPrice(double price) {
	newPrice = price;
}