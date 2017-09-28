#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void) {

	int temp = 7;
	int len = sizeof(int)*8;
	int count = 0;	
	int i,sum,j;
	for(i = 0;i < len;i++){
		 j = 1<<i;
		sum = temp&j;
		if(sum > 0){
			count++;
		}
	}	
	
	printf("%d\n",count);



	return 0;
}
