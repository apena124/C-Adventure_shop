#include <iostream>
#include <string>
#include <fstream>

using namespace std;

#ifndef Tools_H
#define Tools_H
class Tools {
public:
	//default constructor
	Tools();
	
	//accessor functions
	string getNewName()const;
	double getNewDurability()const;
	double getNewPrice()const;

	//mutator functions
	void setNewName(string);
	void setNewDurability(double);
	void setNewPrice(double);

private:
	string newName;
	double newDurability;
	double newPrice;
};

#endif
