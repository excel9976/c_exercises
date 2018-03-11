#include <stdio.h>


void main(void)
{
	printf("Enter a number of minutes: ");
	unsigned int input_minutes, minutes, hours;
	scanf("%u", &input_minutes);
	
	// there are 60 min per 1 hour
	// split "input_minutes" into a whole number of hours and some left over minutes.
	// store the hours in the "hours" variable.
	// store the leftover minutes in the "minutes" variable.

	printf("%u minutes is equal to %u hours and %u minutes\n", input_minutes, hours, minutes);
}
