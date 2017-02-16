// demonstrates unary operator prefix and postfix modes

#include <stdio.h>

int a, b;

int main (void)
{
	// initializes both a and b to 0
	a = b = 0;

	int i = 0; // used for for loop

	// prefix incrementation for b, postfix incrementation for a
	printf ("Count up xD\n");
	printf ("Post		pre\n");
	for ( i = 0; i < 5; ++i )
	{
		printf ("%i		%i\n", a++, ++b);
	}

	printf ("\nCurrent values of a and b:\n");
	printf ("%i		%i\n\n", a, b);

	printf ("Count down xD\n");
	printf ("\nPost		Pre\n");
	for ( i = 0; i < 5; ++i )
	{
		printf ("%i		%i\n", a--, --b);
	}

	return 0;
}
