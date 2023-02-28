#include <iostream>
#include <string>
#include <fstream>

using namespace std;

#ifndef Potions_H
#define Potions_H

class Potions {
public:
	//default constructor
	Potions();
	
	//accessor functions
	string getNewName()const;
	string getNewEffect()const;
	string getNewDuration()const;
	double getNewPrice()const;

	//mutator functions
	void setNewName(string);
	void setNewEffect(string);
	void setNewDuration(string);
	void setNewPrice(double);

private:
	string newName; 
	string newEffect;
	string newDuration;
	double newPrice;
};
#endif