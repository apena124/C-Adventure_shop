#include <iostream>
#include <string>
#include <fstream>

using namespace std;

#ifndef Weapons_H
#define Weapons_H
class Weapons {
public:
	//default constructor
	Weapons();
	
	//accessor functions
	string getNewName()const;
	double getNewDamage()const;
	double getNewDurability()const;
	double getNewPrice()const;

	//mutator functions
	void setNewName(string);
	void setNewDamage(double);
	void setNewDurability(double);
	void setNewPrice(double);

private:
	string newName;
	double newDamage;
	double newDurability;
	double newPrice;
};
#endif