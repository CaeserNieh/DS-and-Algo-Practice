#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	printf("this is a pointer test!!!\n");
	char *point_char;
	// point_char 是一個指向char的pointer
	int *pointer_int;
	// pointer_int 是一個指向int的pointer
	double *pointer_double;
	// point_double 是一個指向double的pointer

	printf("%ld\n",sizeof(point_char));
	printf("%ld\n",sizeof(pointer_int));
	printf("%ld\n",sizeof(pointer_double));

	// pointer 大小都一樣，32bit的系統 4byte  64bit的系統 8byte
	// pointer的increment (pointer++) 才會有差異 
	// pointer_int++ 位移4bytes (因為指向的是int  4byte)
	// point_char++ 位移1bytes (因為指向的是char  1byte)
	
	// pointer_int address
	printf("pointer_int address : %p\n", &pointer_int);
	// tt address;
	int tt = 5;
	printf("int tt address : %p\n", &tt);
	
	//將tt address 放到pointer_int value
	pointer_int = &tt;
	printf("*pointer_int : %d\n", *pointer_int);//取值
	printf("pointer_int value : %p\n", pointer_int);

	pointer_int++;
	printf("After pointer_int ++ : %p\n", pointer_int);


	printf("---------------------------------------------------\n");

	char cc = '4';
	//將 cc address 放到point__char value
	point_char = &cc;

	printf("point_char address : %p\n", &point_char);


	printf("char cc address : %p\n",&cc);
	printf("char cc value : %c\n", cc);
	printf("*point_char : %c\n", *point_char);

	printf("point_char value : %p\n", point_char);
	point_char++;
	printf("After pointer_int ++  : %p\n",point_char);


	return 0;
}
