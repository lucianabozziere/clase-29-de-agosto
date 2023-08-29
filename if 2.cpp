#include <stdio.h>
#include <math.h>

int main ()
{	
	if (5>3 &&10 <= 10)
	{
		printf ("instruccion dentro de if\n");
		if (5>= 3)
		{
			printf("instruccion animada dentro de if\n");
		}
		else
		{
			printf("instruccion animada dentro de else\n");
		}
    }	
	else
	{
		printf("instruccion dentro de else\n");
	}
	printf("instruccion fuera de if-else\n");
	return 0;
}

