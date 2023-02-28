#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#ifndef Armor_H
#define Armor_H
class Armor {
public:
	//default constructor
	Armor();

	//accessor functions
	string getNewName()const;         //gets name of armor
	double getNewDurability()const;   //gets durability of armor
	double getNewPrice()const;

	//mutator functions
	void setNewName(string);
	void setNewDurability(double);
	void setNewPrice(double);

private:
	//member variables
	string newName;
	double newDurability;
	double newPrice;
};
#endif