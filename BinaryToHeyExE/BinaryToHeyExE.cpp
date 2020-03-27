// BinaryToHeyExE.cpp : Diese Datei enthält die Funktion "main". Hier wohnt die Olga (also die Kuh).
//
// Das ist moralisch höchst verwerflich!

#include "pch.h"
#include <iostream>
using namespace std;


int main()
{

	menu();

	//END IF SUCCESSFULL
	return 0;

}

void menu() {

	int menuint;

	cout << "#################################\n| 1 - Convert Binary to Decimal |\n| 2 - Convert Decimal to Binary |\n#################################\n";
	cin >> menuint;

	if(menuint == 1) {

		convertbinarytodecimal();

	}
	else if (menuint == 2) {

		convertdecimaltobinary();

	}

}

void convertbinarytodecimal() {

	long long binary;
	int decimalNumber = 0, i = 0, remainder;

	cout << "Please enter your Binary Number!\n";
	cin >> binary;

	while (binary != 0) {

		remainder = binary % 10;

		binary /= 10;

		decimalNumber += remainder * pow(2, i);

		++i;

	}

	cout << "Your Number in Decimal is " << decimalNumber << "\n\n";
	cin.ignore(std::numeric_limits<streamsize>::max(), '\n');

	menu();

}

void convertdecimaltobinary() {

	//Used code from StackOverflow cause my own code breaks when deciaml is 1024 or higher. :/
	/*
	long long binaryNumber = 0;
	int remainder, decimal, i = 1, step = 1;*/

	int decimal;

	cout << "Please enter your Decimal Number!\n";
	cin >> decimal;

	std::string r;
	while (decimal != 0) { r = (decimal % 2 == 0 ? "0" : "1") + r; decimal /= 2; }

	//Used code from StackOverflow cause my own code breaks when deciaml is 1024 or higher. :/

	/*while (decimal != 0) {

		remainder = decimal % 2;

		cout << "Step " << step++ << ": " << decimal << "/2, Bit = " << remainder << ", Quotient = " << decimal / 2 << endl;

		decimal /= 2;

		binaryNumber += remainder * i;

		i *= 10;

	}*/

	cout << "Your Number in Binary is " << r.c_str() << "\n\n";
	cin.ignore(std::numeric_limits<streamsize>::max(), '\n');

	menu();

}

// German Visual Studio 2017 Notices
// Programm ausführen: STRG+F5 oder "Debuggen" > Menü "Ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"
