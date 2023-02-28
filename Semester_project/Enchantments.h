#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#ifndef Enchantments_H
#define Enchantments_H
class Enchantments {
public:
	//default constructor
	Enchantments();
	
	//accessor functions
	string getNewName()const;
	string getNewEffect()const;
	double getNewPrice()const;

	//mutator functions
	void setNewName(string);
	void setNewEffect(string);
	void setNewPrice(double);

private:
	string newName;
	string newEffect;
	double newPrice;

};
#endif
