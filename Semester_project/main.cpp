/*
Projects are starting, They should be completed the week of the final exam.
Here are the things you need to do for the project.

1. The program must include 5 classes (The classes cannot be small useless classes, or similar to another class).
Must use Inheritance or Polymorphism.
2. Must include Searching/Sorting, Arrays, Arrays of Classes, Loops, Condition statements and inFile/outFile (3 files minimum).

3. If you are making a story based game or Role Playing Game, your program should be MINIMUM 5000 lines of code
(no un-needed spacing) which is adding all the .cpp and .h files together. 
If you are doing an inventory based game such as a Mall (which has a bank so you fully implement an atm machine,
it has stores you buy stuff from, and other things you can think of doing at a mall)
you only require 2500 lines of code. Hard part of an inventory based program is coming up with 
classes which are not similar... class JCPenny and class Footlocker is obviously too 
similar...they are both stores and you should have called it class Store, with a variable string name which holds the name of the store.

4. Must only use material we've covered in class (chapters 1-9) emphasizing chapters 7-9 
more... You can also include linked lists and recursion if you want.  
You will learn Linked lists soon and... may enjoy them.  
Do not use more advanced things not covered in class or you may be suspected of cheating
(getting the code from online). Program MUST be able to run with no errors or you get a zero

*the line requirement should be reached... but if you were unable to reach it, 
points will be deducted based on the program performance 
(a very good program with 1000 fewer lines is still a very good program so very few points subtracted,
while an average program with 1000 fewer lines will remove more points)
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//call all the headrs files 
#include "Armor.h"
#include "Enchantments.h"
#include "Potions.h"
#include "Tools.h"
#include "Weapons.h"

void mainMenu();

//arrays of classes
Armor armor[3];
Enchantments enchantments[3];
Potions potions[4];
Tools tools[3];
Weapons weapons[4];

int main() {
	//all the varables for users choices 
	int choice, armorChoice, weaponsChoice, toolsChoice, potionsChoice, enchantmentsChoice, index = 0, size;
	string name, effect, type, duration;
	double price, durability, damage, money = 5000;

	//for calling all the files
	ifstream armorFile;
	ifstream enchantmentsFile;
	ifstream potionFile;
	ifstream toolsFile;
	ifstream weaponsFile;

	do {
		//call the main menu and get user choice
		mainMenu();
		cin >> choice;
		system("cls");
		switch (choice) {
			//this is the menu choice if user want to see armors
		case 1:
			armorFile.open("armor.txt");
			for (int i = 0; i < 3; i++) {
				if (armorFile.is_open()) {
					armorFile >> name >> durability >> price;
				}
				armor->setNewName(name);
				armor->setNewDurability(durability);
				armor->setNewPrice(price);
				cout << i+1 <<") Name: " << armor[index].getNewName() << " Durability: " << armor[index].getNewDurability() << " Price: " 
					<< armor[index].getNewPrice() << endl;
			}armorFile.close();

			cout << "==================================\n";
			cout << "Make a choice (from 1 - 3): ";
			cin >> armorChoice;

			if (armorChoice == 1) {
				cout << "Your purchase is being processed.\n";
				if (500 > money) {
					cout << "You don't have the money for that\n";
				}
				else
					money = money - 500;
				cout << "Remaing money: " << money << endl;
			}
			else if (armorChoice == 2) {
				cout << "Your purchase is being processed.\n";
				if (600 > money) {
					cout << "You dont have the money for that\n";
				}
				else
					money = money - 600;
				cout << "Remaining money: " << money << endl;
			}
			else if (armorChoice == 3) {
				cout << "Your purchance is being processed.\n";
				if (700 > money) {
					cout << "You dont have the money for  that\n";
				}
				else
					money = money - 700;
				cout << "Remaining money: " << money << endl;
			}
			else {
				cout << "Wrong choice.";
			}

			system("PAUSE");
			system("cls");
			break;

			//this is the menu choice for all the enchantments
		case 2:
			enchantmentsFile.open("enchantments.txt");
			for (int i = 0; i < 8; i++) {
				if (enchantmentsFile.is_open()) {
					enchantmentsFile >> name >> effect >> price;
				}
				getline(enchantmentsFile, type);

				for (int y = 0; y < effect.length(); y++) {
					if (effect.substr(y, 1) == "_") {
						effect[y] = ' ';
					}
				}
				enchantments->setNewName(name);
				enchantments->setNewEffect(effect);
				enchantments->setNewPrice(price);
				cout << i+1 <<") Name: " << enchantments[index].getNewName() << "\nEffect: " << enchantments[index].getNewEffect() << "\nPrice: " 
					<< enchantments[index].getNewPrice() << endl << endl;
			}enchantmentsFile.close();
			cout << "====================================\n";
			cout << "Make a choice (form 1 - 8): ";
			cin >> enchantmentsChoice;

			if (enchantmentsChoice == 1) {
				cout << "Your purchase is being processed.\n";
				if (500 > money) {
					cout << "You don't have the money for that\n";
				}
				else
					money = money - 500;
				cout << "Remaing money: " << money << endl;
			}
			else if (enchantmentsChoice == 2) {
				cout << "Your purchase is being processed.\n";
				if (130 > money) {
					cout << "You dont have the money for that\n";
				}
				else
					money = money - 130;
				cout << "Remaining money: " << money << endl;
			}
			else if (enchantmentsChoice == 3) {
				cout << "Your purchase is being processed.\n";
				if (50 > money) {
					cout << "You dont have the money for that\n";
				}
				else
					money = money - 50;
				cout << "Remaining money: " << money << endl;
			}
			else if (enchantmentsChoice == 4) {
				cout << "Your purchase is being processed.\n";
				if (270 > money) {
					cout << "You dont have the money for that\n";
				}
				else
					money = money - 270;
				cout << "Remaining money: " << money << endl;
			}
			else if (enchantmentsChoice == 5) {
				cout << "Your purchase is being processed.\n";
				if (100 > money) {
					cout << "You dont have the money for that\n";
				}
				else
					money = money - 100;
				cout << "Remaining money: " << money << endl;
			}
			else if (enchantmentsChoice == 6) {
				cout << "Your purchase is being processed.\n";
				if (110 > money) {
					cout << "You dont have the money for that\n";
				}
				else
					money = money - 110;
				cout << "Remaining money: " << money << endl;
			}
			else if (enchantmentsChoice == 7) {
				cout << "Your purchase is being processed.\n";
				if (150 > money) {
					cout << "You dont have the money for that\n";
				}
				else
					money = money - 150;
				cout << "Remaining money: " << money << endl;
			}
			else if (enchantmentsChoice == 8) {
				cout << "Your purchase is being processed.\n";
				if (300 > money) {
					cout << "You dont have the money for that\n";
				}
				else
					money = money - 300;
				cout << "Remaining money: " << money << endl;
			}
			else {
				cout << "Wrong choice.\n";
			}
			system("PAUSE");
			system("cls");
			break;

			//this is the menu choice for all the potions
		case 3:
			potionFile.open("potions.txt");
			for (int i = 0; i < 6; i++) {
				if (potionFile.is_open()) {
					potionFile >> name >> effect >> duration >> price;
				}

				getline(potionFile, type);

				for (int x = 0; x < name.length(); x++) {
					if (name.substr(x, 1) == "_") {
						name[x] = ' ';
					}
				}
				for (int y = 0; y < effect.length(); y++) {
					if (effect.substr(y, 1) == "_") {
						effect[y] = ' ';
					}
				}
				potions->setNewName(name);
				potions->setNewEffect(effect);
				potions->setNewDuration(duration);
				potions->setNewPrice(price);
				cout << i + 1 << ") Name: " << potions[index].getNewName() << endl << "Effect: " << potions[index].getNewEffect() << endl
					<< "Duration: " << potions[index].getNewDuration() << endl << "Price: " << potions[index].getNewPrice() << endl <<endl;
			}potionFile.close();
			cout << "=====================================\n";
			cout << "Make a choice (from 1 - 6): ";
			cin >> potionsChoice;
			if (potionsChoice == 1) {
				cout << "Your purchase is being processed.\n";
				if (200 > money) {
					cout << "You don't have the money for that\n";
				}
				else
					money = money - 200;
				cout << "Remaing money: " << money << endl;
			}
			else if (potionsChoice == 2) {
				cout << "Your purchase is being processed.\n";
				if (100 > money) {
					cout << "You dont have the money for that\n";
				}
				else
					money = money - 100;
				cout << "Remaining money: " << money << endl;
			}
			else if (potionsChoice == 3) {
				cout << "Your purchase is being processed.\n";
				if (50 > money) {
					cout << "You dont have the money for that\n";
				}
				else
					money = money - 50;
				cout << "Remaining money: " << money << endl;
			}
			else if (potionsChoice == 4) {
				cout << "Your purchase is being processed.\n";
				if (300 > money) {
					cout << "You dont have the money for that\n";
				}
				else
					money = money - 300;
				cout << "Remaining money: " << money << endl;
			}
			else if (potionsChoice == 5) {
				cout << "Your purchase is being processed.\n";
				if (250 > money) {
					cout << "You dont have the money for that\n";
				}
				else
					money = money - 250;
				cout << "Remaining money: " << money << endl;
			}
			else if (potionsChoice == 6) {
				cout << "Your purchase is being processed.\n";
				if (500 > money) {
					cout << "You dont have the money for that\n";
				}
				else
					money = money - 500;
				cout << "Remaining money: " << money << endl;
			}
			else {
				cout << "Wrong choice\n";
			}
			system("PAUSE");
			system("cls");
			break;

			//this is the menu choice for all the tools 
		case 4:
			toolsFile.open("tools.txt");
			for (int i = 0; i < 3; i++) {
				if (toolsFile.is_open()) {
					toolsFile >> name >> durability >> price;
				}
				tools->setNewName(name);
				tools->setNewDurability(durability);
				tools->setNewPrice(price);
				cout << i+1<< ") Name: " << tools[index].getNewName() << " Durability: " << tools[index].getNewDurability() << " Price: " 
					<< tools[index].getNewPrice() << endl << endl;
			}toolsFile.close();
			cout << "====================================\n";
			cout << "Make a choice (from 1 - 3): ";
			cin >> toolsChoice;
			if (toolsChoice == 1) {
				cout << "Your purchase is being processed.\n";
				if (50 > money) {
					cout << "You don't have the money for that\n";
				}
				else
					money = money - 50;
				cout << "Remaing money: " << money << endl;
			}
			else if (toolsChoice == 2) {
				cout << "Your purchase is being processed.\n";
				if (80 > money) {
					cout << "You dont have the money for that\n";
				}
				else
					money = money - 80;
				cout << "Remaining money: " << money << endl;
			}
			else if (toolsChoice == 3) {
				cout << "Your purchase is being processed.\n";
				if (40 > money) {
					cout << "You dont have the money for that\n";
				}
				else
					money = money - 40;
				cout << "Remaining money: " << money << endl;
			}
			else {
				cout << "Wrong choice\n";
			}
			system("PAUSE");
			system("cls");
			break;

			//this is the menu choice for all the weapons 
		case 5:
			weaponsFile.open("weapons.txt");
			for (int i = 0; i < 4; i++) {
				if (weaponsFile.is_open()) {
					weaponsFile >> name >> damage >> durability >> price;
				}
				weapons->setNewName(name);
				weapons->setNewDamage(damage);
				weapons->setNewDurability(durability);
				weapons->setNewPrice(price);
				cout << i+1 <<") Name: " << weapons[index].getNewName() << " Damage: " << weapons[index].getNewDamage() << " Durability: "
					<< weapons[index].getNewDurability() << " Price: " << weapons[index].getNewPrice() << endl << endl;
			}weaponsFile.close();
			cout << "===================================\n";
			cout << "Make a choice (from 1 - 4): ";
			cin >> weaponsChoice;
			if (weaponsChoice == 1) {
				cout << "Your purchase is being processed.\n";
				if (100 > money) {
					cout << "You don't have the money for that\n";
				}
				else
					money = money - 100;
				cout << "Remaing money: " << money << endl;
			}
			else if (weaponsChoice == 2) {
				cout << "Your purchase is being processed.\n";
				if (140 > money) {
					cout << "You dont have the money for that\n";
				}
				else
					money = money - 140;
				cout << "Remaining money: " << money << endl;
			}
			else if (weaponsChoice == 3) {
				cout << "Your purchase is being processed.\n";
				if (300 > money) {
					cout << "You dont have the money for that\n";
				}
				else
					money = money - 300;
				cout << "Remaining money: " << money << endl;
			}
			else if (weaponsChoice == 4) {
				cout << "Your purchase is being processed.\n";
				if (600 > money) {
					cout << "You dont have the money for that\n";
				}
				else
					money = money - 600;
				cout << "Remaining money: " << money << endl;
			}
			else {
				cout << "Wrong choice\n";
			}
			system("PAUSE");
			system("cls");
			break;

			//this will exit teh program
		case 6:
			cout << "Thanks for shoping with us. Oh and all purcheses are final.\n";
			system("PAUSE");
			return 0;
			break;

			//incase the user enters somthing wrong
		default:
			cout << "\n\n\tSorry that is not an option.\n\n";
		}
	} while (choice != 6);

	return 0;
}

//displays the main menu for the user to make a choice
void mainMenu(){
	cout << "\t\t\tWelcome to the adventures shop." << endl << "\t\tHere you will find all you need to set on to your adventure.\n";
	cout << "\t\tyou have been allotted 5,000.00 coins for purchese's \n"<< "\t\tNow i will show you a subcategory of the list of items.\n";
	cout << "=====================================================================" << endl;
	cout << "1) Armor" << endl << "2) Enchantments" << endl << "3) Potions" << endl << "4) Tools" << endl << "5) Weapons" << endl << "6) Leave shop" << endl;
	cout << "=====================================================================" << endl;
	cout << "\t\tNow that you have seen all the options" << endl << " \t\tyou will see the respected itmes and their prices. \n\nMake your choice: ";
}