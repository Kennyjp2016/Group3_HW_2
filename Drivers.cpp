/*
** This program is used to test functions in the LoopsFilesFunctions program
*/

#include <fstream>
#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>
#include "questions.h"
#include "util.h"

using namespace std;

/*
** This function compares the results from OneOrTwo() against a pascals triangle
** It counts the number of heads in a group of 5 tossed 'coins' and tosses that
** group 32 (2^5) times.
*/

void testCoinFlip() {
	ofstream outputFile;
	outputFile.open("coinFlipTest.txt");
	int distributionHeads[5];
	//init distributionHeads to all 0's
	for (int i = 0; i < 5; i++) {
		distributionHeads[i] = 0;
	}
	//run the test
	for (int i = 0; i < 32; i++) {
		int numHead = 0;
		outputFile << "Group " << i << " :\t";
		for (int j =0; j < 5; j++) {
			if (OneOrTwo() == 1) {
				outputFile << "Head\t";
				numHead++;
			} else {
				outputFile << "Tail\t";
			}
		}
		outputFile << "\n";
		distributionHeads[numHead] = 1 +  distributionHeads[numHead];
	}
	outputFile << "The distrubution of heads: \n";
	outputFile << "|\t0 heads\t|\t1 heads\t|\t2 heads\t|\t3 heads\t|\t4 heads\t|\t5 heads\t|\n";
	outputFile << "|\t";
	for (int i = 0; i < 6; i++) {
		outputFile << distributionHeads[i] << "\t|\t";
	}
	outputFile << "\n";
	outputFile << "the pascal values are:\n";
	outputFile << "|\t0\t|\t1\t|\t2\t|\t3\t|\t4\t|\t5\t|\n";
	outputFile << "|\t1\t|\t5\t|\t10\t|\t10\t|\t5\t|\t1\t|\n";
	outputFile.close();
	cout << "Results stored in coinFlipTest.txt\n";
}

void testMemFeeMod () {
	for (int i = 1; i <= 10; i ++) {
		cout << "memFeeModified is passed: %" << i * 0.1 << ", " << i << " years and returns: \n";
		memFeeModified(i * 0.1, i);
	}
}

void drivers () {
	bool exit = false;
	while (exit == false) {
		cout << "Testing the coin flips\n";
		testCoinFlip();
		cout << "Testing membership fee\n";
		testMemFeeMod();
		exit = exitPrompt();
	}
}
