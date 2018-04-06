#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

//  Set a Bit Experiment
	unsigned char a = 128;
	printf("%d\n",a);
/*
	1向做位移1個bit 做 OR
	a |= (1<<1);
	printf("%d",a);
*/
	a |= (1<<5);
	printf("%d\n",a);

//	Clear a Bit Experiment
	unsigned char b = 255;
/*
	1向左位移1個bit 反向 做 AND
	b &= ~(1<<1);
	printf("%d\n",b);
*/
	b &= ~(1<<5);
	printf("%d\n",b);

//	Taggle a Bit Experiment
/*
	向左位移1個bit  做 XOR  來做0 1互換
	c ^= (1 << n)
*/
	unsigned char c = 255;
	c ^= (1 << 5);
	printf("%d\n",c);


//	right/left most byte

	unsigned int val = 0xff88;

//	right most byte  (least siginificant)	
	unsigned char right = val & 0xff;
	printf("right = %d\n",right);

//	left most byte (most siginigicant)
	unsigned char left = (val>>8) & 0xff;
	printf("left = %d\n",left);



	return 0;
}
