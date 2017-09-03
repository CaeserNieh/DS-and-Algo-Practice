/*
this is a swap program
try to use xor to achieve that
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int i,j;
	printf("i = ");
	scanf("%d",&i);
	printf("j = ");
	scanf("%d",&j);
	i = i^j;
	printf("-----First xor------\n");
	printf("i = %d\n",i);
	j = i^j;
	printf("-----Second xor-----\n");
	printf("j = %d\n",j);
	i = i^j;
	printf("-----Third xor------\n");
	printf("i = %d\n",i);

	printf("i = %d \nj = %d\n",i,j); 
	

	return 0;
}
