/*
** This function flips a number of coins, specified by the user
** the function does this by returning a random number, that is either 1 or 2
** if the number is 1 the program displays heads and tails if 2
*/

#include <chrono>
#include <thread>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "util.h"

using namespace std;

int OneOrTwo () {
	int x;
	//init a random seed
	unsigned seed = time(0);
	int minVal = 1;
	int maxVal = 2;
	//generate either 0 or 1
	x = ( rand() % (maxVal - minVal + 1)) + 1;
	//pause a second so that the seed for rand is new next time the function is called
	return x;
}

void coinToss() {
	cls();
	bool exit = false;
	int coins;
	while (exit == false) {
		cls();
		cout << "How Many Coins do you want to flip? ";
		coins = goodIn(1, 100);

		for (int i = 0; i < coins; i++) {
			int result = OneOrTwo();
			if ( result == 1 ) {
				cout << "Heads\n";
			} else {
				cout << "Tails\n";
			}
		}
		exit = exitPrompt();
	}
}

