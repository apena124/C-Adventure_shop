#include "Enchantments.h"

Enchantments::Enchantments() { newPrice = 0; }

string Enchantments::getNewName()const {
	return newName;
}

string Enchantments::getNewEffect()const {
	return newEffect;
}

double Enchantments::getNewPrice()const {
	return newPrice;
}

void Enchantments::setNewName(string name) {
	newName = name;
}

void Enchantments::setNewEffect(string effect) {
	newEffect = effect;
}

void Enchantments::setNewPrice(double price) {
	newPrice = price;
}