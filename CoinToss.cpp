/*
** This function flips a number of coins, specified by the user
** the function does this by returning a random number, that is either 1 or 2
** if the number is 1 the program displays heads and tails if 2
*/

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <util.h>

using namespace std;

int OneOrTwo () {
	int x;
	//init a random seed
	srand(time(NULL));
	//generate either 0 or 1
	x = rand() % 2;
	//incriment x so that it is wither 1 or 2
	x++;
	return x;
}

void coinToss() {
	bool exit = false;
	int coins;
	while (exit == false) {
		cls();
		cout << "How Many Coins do you want to flip? ";
		coins = goodIn(1, 100);

		for (int i = 0; i < coins; i++) {
			if ( OneOrTwo() == 1 ) {
				cout << "Heads\n";
			} else {
				cout << "Tails\n";
			}
		}
		exit = exitPrompt();
	}
}

