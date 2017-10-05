/*

Tobi Wainwright, Spencer Bullinger, Hayden Hurst - 10/5/2017 period 4

Three_Digit_Ascend_Descend_Selection



*/

// Libraries

#include <iostream>// gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha

#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces

using namespace std;

// Functions()

void pause() {

	cout << "Press any key to continue . . .";

	while (!_kbhit());

	_getch();

	cout << '\n';
}

// MAIN

void main() {
	int x;
	int a; // the eventual hundreds place value
	int b; // the eventual tens place value
	int c; // the eventual ones place number
	cout << "please enter a 3 digit number, for example 123" << endl;
	cin >> x; // the original number
	a = x / 100; // isolate the hundreds place
    b = (x - (a * 100)) / 10; // isolate the tens place using hundreds place
	c = (x - ((a * 100) + (b * 10))); // isolate the ones place using prior places

	if (a > b&&b > c) { 
		cout << "the number is descending" << endl;
	}
	
	else if (a < b&&b < c) {
		cout << "the number is ascending" << endl;
	}
	
	pause(); // pauses to see the displayed text
	return;
}