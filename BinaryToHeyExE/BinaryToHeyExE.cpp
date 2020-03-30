// BinaryToHeyExE.cpp : Diese Datei enthält die Funktion "main". Hier wohnt die Olga (also die Kuh).
//
// Das ist moralisch höchst verwerflich!

#include "pch.h"
#include "BinaryToHeyExE.h"
#include <iostream>
#include <cmath>
#include <limits>
#include <fstream>
#include <string>

using namespace std;



int main()
{

	menu();

	//END IF SUCCESSFULL
	return 0;

}

void menu() {

	int menuint;

	cout << "\n\n#################################\n| 1 - Convert Binary to Decimal |\n| 2 - Convert Decimal to Binary |\n| 3 - Convert Heximal to Binary |\n| 4 - Convert Binary to Heximal |\n| 5 - Convert Decimal to Heximal|\n| 6 - Convert Heximal to Decimal|\n#################################\n";
	cin >> menuint;

	if(menuint == 1) {

		convertbinarytodecimal();

	}
	else if (menuint == 2) {

		convertdecimaltobinary();

	}
	else if (menuint == 3) {

		converthextobinary();

	}
	else if (menuint == 4) {

		convertbinarytohex();

	}
	else if (menuint == 5) {

		convertdecimaltohex();

	}
	else if (menuint == 6) {

		converthextodecimal();

	}

}

//Adding Binary to Decimal Options

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

	//Used code from StackOverflow cause my own code breaks when decimal is 1024 or higher. :/
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

//Adding Hex to Binary Options



// convert Hexadecimal to Binary Number
void converthextobinary() {

	string hexa;

	cout << "Please enter your Heximal Number!\n";
	ws(cin);
	getline(cin, hexa);

	cout << "\nYour Number in Binary is: ";

	long int i = 0;
	while (hexa[i]) {
		switch (hexa[i]) {
		case '0':
			cout << "0000";
			break;
		case '1':
			cout << "0001";
			break;
		case '2':
			cout << "0010";
			break;
		case '3':
			cout << "0011";
			break;
		case '4':
			cout << "0100";
			break;
		case '5':
			cout << "0101";
			break;
		case '6':
			cout << "0110";
			break;
		case '7':
			cout << "0111";
			break;
		case '8':
			cout << "1000";
			break;
		case '9':
			cout << "1001";
			break;
		case 'A':
		case 'a':
			cout << "1010";
			break;
		case 'B':
		case 'b':
			cout << "1011";
			break;
		case 'C':
		case 'c':
			cout << "1100";
			break;
		case 'D':
		case 'd':
			cout << "1101";
			break;
		case 'E':
		case 'e':
			cout << "1110";
			break;
		case 'F':
		case 'f':
			cout << "1111";
			break;
		default:
			cout << "\please enter valid hexadecimal digit " << hexa[i];
		}
		i++;
	}

	long long binary;
	int decimalNumber = 0, remainder;

	cout << "Please enter your Hex Number!\n";
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

void convertbinarytohex() {
	long int binnum, rem, quot;
	int i = 1, j, temp;
	char hexdecnum[100];
	cout << "Enter Binary Number : ";
	cin >> binnum;
	quot = binnum;
	while (quot != 0)
	{
		temp = quot % 16;
		// To convert integer into character
		if (temp < 10)
		{
			temp = temp + 48;
		}
		else
		{
			temp = temp + 55;
		}
		hexdecnum[i++] = temp;
		quot = quot / 16;
	}
	cout << "Your Number in Heximal is :\n";
	for (j = i - 1; j > 0; j--)
	{
		cout << hexdecnum[j];
	}
	cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
	menu();

}

//Adding Decimal to Heximal Options

// Need to restart programm because std::hex just works once

void converthextodecimal() {

	int integer;
	std::cout << "Entex Hex to Convert hex to decimal" << std::endl;
	std::cin >> std::hex >> integer;
	std::cout << "Your number in decimal is: " << integer << std::endl;
	cin.ignore(std::numeric_limits<streamsize>::max(), '\n');

}

void convertdecimaltohex() {

	long int decnum;
	char hexdecnum[100];
	int i = 1, j, temp;
	cout << "Enter any decimal number : ";
	cin >> decnum;
	cout << "Your number in heximal is: ";
	cout << std::hex << decnum << endl;
	cin.ignore(std::numeric_limits<streamsize>::max(), '\n');

}



// German Visual Studio 2017 Notices
// Programm ausführen: STRG+F5 oder "Debuggen" > Menü "Ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"
