/* swap.c*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
scanf("i= %d",&i);  
can not use scanf in this way
*/

int main()
{
	int i,j,temp;
	printf("i = ");
	scanf("%d",&i);
	printf("j = ");
	scanf("%d",&j);
	temp = i;
	i = j;
	j = temp;
	printf("i = %d\n",i);
	printf("j = %d\n",j);
	return 0;

}



