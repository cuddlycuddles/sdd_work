#define CURRYEAR 2017
#include <stdio.h>

int birthYear, age;

int main (void)
{
	printf ("Year born: ");
	scanf_s ("%i", &birthYear);

	// see if user was born in leap year xD

	birthYear % 4 == 0 ? printf ("You were born in a leap year.\n") : printf ("You were not born in a leap year.\n");

	age = CURRYEAR - birthYear;

	// check voting age and legal alcohol consumption

	age >= 18 ? printf ("You can vote and drink.\n") : printf ("You can't vote and you can't drink, LEGALLY\n");

	return 0;
}
