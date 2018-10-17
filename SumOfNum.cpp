/*
** This function asks the user for a positive int value, and uses a loop to sum
** all the ints from 1 to the number entered
**
** No range given by the client, assume it is the same as that of an unsigned int
**
** Since the range is that of an unsinged int, the result will need to be stored
** in a variable that can hold it, like a double or long
*/


void sumofNum()
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
}
