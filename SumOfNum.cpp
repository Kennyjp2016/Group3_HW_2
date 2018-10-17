/*
** This function asks the user for a positive int value, and uses a loop to sum
** all the ints from 1 to the number entered
**
*/

#include <iostream>
#include "util.h"
using namespace std;

void sumOfNum()
{
	cls();
	bool exit = false;
	while (exit == false)
	{
		double total_numbers, count, total_sum;
		cout << "This program numbers sequentially together starting at 1"<< "\nEnter the largest number number:" << endl;
		cin >> total_numbers; // collects total numbers of inputs
		count = 0;
		total_sum = 0;
		while (count < total_numbers) {
			total_sum = ++count + total_sum; // Adds Total Sum
		}
		cout << "The total sum is " << total_sum << endl;
		exit = exitPrompt();
	}
}
