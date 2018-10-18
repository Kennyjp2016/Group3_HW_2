/*
** This function computes and displays the increase in membership fees
** There are two versions, one where the # of years and % increase is predetermined
** and one where those values are given by the user
**
** In either case the increase is the same for each year
**
** All monetary values are in dollars.
*/

#include <iostream>
#include <iomanip>
#include "util.h"
using namespace std;

const int YEARLY_FEE = 2600;
const float YEARLY_CHANGE = 0.04;
const int YEARS = 6;

void memFee ()
{
	bool exit = false;
	while (exit == false)
	{
		cls();
		setprecision(2);

		int count;
		double membership_fee = YEARLY_FEE;
		count = 1;
		cout << "This program calculates the projected membership costs using the estimated cost increases" << endl;
		cout << "Year " << count << " membership fees will be $" << membership_fee << endl;
		while (count < YEARS)
		{
			++count;
			membership_fee = (membership_fee * YEARLY_CHANGE) + membership_fee;
			cout << "Year " << count << " membership fees will be $" << membership_fee << endl;
		}
		exit = exitPrompt();
	}
}

/*
** This function performs the same task as memFee, but it takes the number of years
** and % increase as arguments
*/

void memFeeModified (double yearly_increase, int years) {
	double membership_fee = YEARLY_FEE;
	bool exit = false;
	int count;
	count = 1;
	cout << "Year " << count << " membership fees will be $" << membership_fee << endl;
	while (count <= years)
	{
		++count;
		membership_fee += (membership_fee * yearly_increase);
		cout << "Year " << count << " membership fees will be $" << membership_fee << endl;
	}
	exit = exitPrompt();
}
