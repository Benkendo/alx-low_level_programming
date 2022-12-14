#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		
		if (n>0)
		{
	        return "n is positive\n";
		}
		if else(n==0){
		return "n is zero\n";
		}
		if else (n<0){
		return " n is negative\n";
		}
		else
		return "n is not valid number\n"

		return (0);

}
