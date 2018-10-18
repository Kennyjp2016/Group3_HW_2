/*
** This program calls the function fallingDistance repeatedly in a loop
** The function passes fallingDistance the values 1 through 10 as arguments
** and displays the return value
*/
#include <iostream>
#include "util.h"
using namespace std;

float fallingDistance (float seconds);
float fallingDistanceModified(float seconds, float initialHeight = 0);

void falling () {
	bool exit = false;
	//call fallingDistance repeatedly
	for (int i = 1; i <= 10; i++) {
		cout << "Falling for " << i << " second.\n";
		cout << "The object fell " << fallingDistance(i) << " meters\n";
	}
	exit = exitPrompt();
}

/*
** This function calculates the distance an object falls in a specified number
** of seconds according to this formula:
**	d = (1/2)*g*(t^2)
**
** arguments:
**	seconds		The number of seconds the object is falling for
**
** outputs:
**	d:			The distance in meters the object will fall in the specified time
*/

float fallingDistance (float seconds) {
	float d;
	float g = 12.6; //gravity constant provided by the client
	float t = seconds;

	d = 0.5 * g * t * t;
	return d;
}

float fallingDistanceModified(float seconds, float initialHeight) {
	float currentHeight, currentTime;
	bool exit = false;
	for (int i = 1; i <= seconds; i++) {
		cout << "Falling for " << i << " second.\n";
		currentHeight = fallingDistance(i);
		currentHeight = initialHeight - currentHeight;
		if (currentHeight < 0) {
			break;
		}
	}
	if (currentHeight < 0) {
		cout << "The object hit the ground" << endl;
		exit = exitPrompt();
		return 0;
		
	}
	else {
		cout << "The object's height above the ground is " << currentHeight << " meters." << endl;
		exit = exitPrompt();
		return currentHeight;
		
	}
	
}
