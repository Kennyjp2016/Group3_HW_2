/*
** Group 3 Assignment 2
** John Kenny
** James Conroy
**
**	Assigned:	10/3/18
**	Due:		10/17/18
*/

#include <iostream>
#include <limits>
#include "questions.h"
#include "Drivers.h"
#include "util.h"
#include <cstdlib>
#include "stdio.h"
#include "conio.h"
#include "time.h"
using namespace std;

int main () {
	//set the seed for rand;
	srand(time(0));
	bool exit = false;
	int select, b;
	double a;
	float c, d, e;
	while (exit == false) {
		//clear the window
		cls();
		cout << "This is group 3's Assignment 2\n";
		cout << "\t1 Sum of Numbers\n";
		cout << "\t2 MembershipFees Increase\n";
		cout << "\t3 Hotel Occupancy\n";
		cout << "\t4 Falling Distance\n";
		cout << "\t5 Coin Toss\n";
		cout << "\t6 MembershipFees Increase Modified\n";
		cout << "\t7 Falling Distance Modified\n";
		cout << "\t0 Exit the program\n";
		cout << "\t8 To run the tests\n";
		cout << "Select the number by the question you want to look at.\n";
		cout << "Enter your Selection: ";
		select = goodIn ( 0, 8);

		switch (select) {
			case 1:
				sumOfNum();
				break;
			case 2:
				memFee();
				break;
			case 3:
				hotel();
				break;
			case 4:
				falling();
				break;
			case 5:
				coinToss();
				break;
			case 6:
				cout << "Enter the yearly increase then enter the number of years that increase will apply" << endl;
				cin >> a >> b;
				memFeeModified(a, b);
				break;
			case 7:
				cout << "Enter the number of seconds the object is falling for then enter the initial height it will be starting from above the ground" << endl;
				cin >> c >> d;
				e = fallingDistanceModified(c, d);
				break;
			case 0:
				exit = true;
				break;
			case 8:
				drivers();
				break;
			default:
				cout << "That input didn't work.\n";
				cout << "Please enter the number by your selection: ";
				break;
		}
	}
	return 0;
}
