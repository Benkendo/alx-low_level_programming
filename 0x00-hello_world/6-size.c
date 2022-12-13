#include <stdio.h>
/**
*main-Express_main
*Description ->function
*Return:Always-0-(Success)
*/
int main(void)
{
char character_type;
int integer_type;
long longinteger_type;
long long lltype;
float float_type;
printf("Size of char: %ld byte(s)\n", sizeof(character_type));
printf("Size of int: %ld byte(s)\n", sizeof(integer_type));
printf("Size of long int: %ld byte(s)\n", sizeof(longinteger_type));
printf("Size of long long int: %ld byte(s)\n", sizeof(lltype));
printf("Size of float: %ld byte(s)\n", sizeof(float_type));
return (0);
}

