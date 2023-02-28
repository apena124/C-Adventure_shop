#include "Potions.h"

Potions::Potions() {;
}

string Potions::getNewName()const {
	return newName;
}

string Potions::getNewEffect()const {
	return newEffect;
}

string Potions::getNewDuration()const {
	return newDuration;
}

double Potions::getNewPrice()const {
	return newPrice;
}

void Potions::setNewName(string name) {
	newName = name;
}

void Potions::setNewEffect(string effect) {
	newEffect = effect;
}

void Potions::setNewDuration(string duration) {
	newDuration = duration;
}

void Potions::setNewPrice(double price) {
	newPrice = price;
}