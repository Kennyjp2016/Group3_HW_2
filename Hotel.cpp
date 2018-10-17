/*
** This program calculates the occupancy rate for a hotel
**
** The program asks the user for the number of floors, then iterates through each
** floor asking the user to input the number of rooms on the floor and how many
** are occupied
**
** After all iterations the program displays the total number of rooms, how many
** are occupied/unoccupied, and the % of rooms that are occupied
**
** Because many hotels do not have a 13th floor the program skips it
** The hotel cannot have less than 1 floor
** each floor cannot have less than 10 rooms
*/
#include <iostream>
#include <iomanip>
#include "util.h"
using namespace std;

void hotel () {
	bool exit = false;
	while (exit == false) {
		int floors;
		int rooms = 0;
		int occupied = 0;
		cls();
		cout << "Hou many floors does this hotel have? \n";
		floors = goodIn(1, 100);

		for (int i = 0; i < floors; i++) {
			int floorRooms;
			if ( i + 1 == 13) {
				cout << "This floor does not exist";
			} else {
				cout << "How many rooms does floor " << i+1 << " have: ";

				floorRooms = goodIn(10, 100);
				rooms += floorRooms;
				cout << "How many of these rooms are occupied: ";
				occupied += goodIn(0, floorRooms);
			}
		}

		cout << "The hotel has " << rooms << " rooms" << endl;
		cout << "There are " << occupied << " occupied rooms\n";
		cout << "There are " << rooms - occupied << " unoccupied rooms\n";
		cout << showpoint << setprecision(2) << fixed;
		double percent = occupied/rooms;
		cout << "The percentage of rooms that are occupied is: " << percent << endl;
		exit = exitPrompt();
	}
}
