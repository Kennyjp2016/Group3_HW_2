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
#include "util.h"

using namespace std;

int main () {
	bool exit = false;
	int select;
	while (exit == false) {
		//clear the window
		cls();
		cout << "This is group 3's Assignment 2\n";
		cout << "\t1 Sum of Numbers\n";
		cout << "\t2 MembershipFees Increase\n";
		cout << "\t3 Hotel Occupancy\n";
		cout << "\t4 Falling Distance\n";
		cout << "\t5 Coin Toss\n";
		cout << "\t0 Exit the program\n"
			cout << "Select the number by the question you want to look at.\n";
		cout << "Enter your Selection: ";
		select = goodIn ( 0, 5);

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
			case 0:
				exit = true;
				break;
			default:
				cout << "That input didn't work.\n";
				cout << "Please enter the number by your selection: ";
				break;
		}
	}
	return 0;
}
