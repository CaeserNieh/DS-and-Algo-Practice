#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define CLEARBIT(a,pos) (a &= ~(1 << pos))

int main(){
	
	/* 'z' : decimal value 122  binary : 01111010 */
	char a = 'z';
	printf("a = %c\n",a);

	char aOut = CLEARBIT(a,5);
	/* 'Z' : decimal value 90 binary : 01011010 */

	printf("aOut = %c\n",aOut);

	return 0;


}
