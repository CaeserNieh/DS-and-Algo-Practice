#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(int*,int*);

/*
use integer  pointer as arg
pass address into swap()
*/


int main(){
	printf("input two integer to swap\n");
	
	int i,j;

	printf("i : ");
	scanf("%d",&i);

	
	printf("j : ");
	scanf("%d",&j);

	swap(&i,&j);
	printf("i : %d\nj : %d\n",i,j);

	return 0;
}

void swap(int* a, int* b ){
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
