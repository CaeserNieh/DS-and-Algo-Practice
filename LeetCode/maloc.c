#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){

	int i,n;
	scanf(" %d",&n);
	printf("%d\n",n);
	
	char *ar[n];
	
	for(i = 0;i < n;i++){
		ar[i] = "Test";
	}
	printf("%s",*(ar+2));


	return 0;
}
