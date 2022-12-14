#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
 main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		
		if (n>0)
		{
	        return "is positive\n";
		}
		if else(n==0){
		return "is zero\n";
		}
		if else (n<0){
		return "is negative\n";
		}
		else
		return "is not valid number\n"

		return (0);

}
