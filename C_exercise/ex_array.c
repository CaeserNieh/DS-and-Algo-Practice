#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int a[10];
	int i;
	/*
	for(i = 0;i<10;i++){
		scanf("%d",&(a[i]));
	}
	for(i = 0;i<10;i++){
		printf("%d\n", a[i]);
	}
*/

	printf("Inner product \n");
	int inner_a[5];
	int inner_b[5];
	int c = 0;
	printf("input 5 element to do inner product\n");
	for( i = 0;i < 5;i++){
		scanf("%d",&inner_a[i]);
	}
	for (i = 0; i < 5; ++i){
		scanf("%d",&inner_b[i]);
	}
	for(i = 0;i < 5;i++){
		c+=inner_a[i]*inner_b[i];
	}
	printf("%d\n", c);



}