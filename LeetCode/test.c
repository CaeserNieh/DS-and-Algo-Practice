#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	
	/*ERROR*/
	/*
	int *pi;
	*pi = 5;
	printf("*pi : %d\n",*pi);
	segmentation fault
	*/
	int *pi;
	int a = 5;
	pi = &a;
	printf("*pi : %d\n",*pi);
	

	int *pi2 = (int*)malloc(sizeof(int));
	*pi2 = 5;
	printf("*pi2 : %d\n",*pi2);

	/*
	char *charpi = 'a';
	printf("*charpi : %c\n",*charpi);
	*/
	char *charpi;
	char t = 'a';
	charpi = &t;
	printf("*charpi : %c\n",*charpi);

	char *pp = "a";
	printf("%p\n",&pp);
	char *kk = pp;
	printf("%d\n",*kk);
	printf("*pp : %s\n",(pp));


	return 0;
}
