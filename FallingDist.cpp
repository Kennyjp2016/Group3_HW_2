/*
** This program calls the function fallingDistance repeatedly in a loop
** The function passes fallingDistance the values 1 through 10 as arguments
** and displays the return value
*/

float fallingDistance (float seconds);

void falling () {
	//call fallingDistance repeatedly
	for (int i = 1; i <= 10; i++) {
		cout << "Falling for " << i << " second.\n";
		cout << "The object fell " << fallingDistance(i) << " meters\n";
	}
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
