/*
** This function computes and displays the increase in membership fees
** There are two versions, one where the # of years and % increase is predetermined
** and one where those values are given by the user
**
** In either case the increase is the same for each year
**
** All monetary values are in dollars.
*/
const int YEARLY_FEE = 2600;
const float YEARLY_CHANGE = 0.04;
const int YEARS = 6;

void memFee () {
{
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

}
void memFeeModified () {
	double yearly_increase, membership_fee;
	int years;
	cout << "This program calculates the projected membership costs using the estimated cost increases" << endl;
	cout << "Please enter the starting membership fee per year\n";
	cin >> membership_fee;
	cout << "Please enter the yearly increase in a decimal form ex 4% increase as .04\n";
	cin >> yearly_increase;
	cout << "Please enter a number of years to show the estimated price per year\n";
	cin >> years;

	int count;
	count = 1;
	cout << "Year " << count << " membership fees will be $" << membership_fee << endl;
	while (count < years)
	{
		++count;
		membership_fee = (membership_fee * yearly_increase) + membership_fee;
		cout << "Year " << count << " membership fees will be $" << membership_fee << endl;
	}
}
