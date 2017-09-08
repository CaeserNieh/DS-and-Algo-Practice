#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int M(int i){
	static count = 0;
	count = count + i;
	return count;
}
void GOO(char *s){
	printf("char pointer to a in GOO : %p\n",s);
	s = malloc(100);
	strcpy(s,"Bob");

}

int main(){
	char *a = "Alice";
	printf("Char pointer to String : %p\n",a);
	int aa[100];
	int temp = 12345;
	printf("integer : %p\n",&temp);
	printf("%p\n",&temp+1);	

	int *temp_pointer = &temp;
	printf("integer pointer : %p\n",temp_pointer);
	printf("integer pointer content : %d\n",*temp_pointer);

	char *name = a;
	printf("char pointer to a : %p\n",name);
	GOO(name);
	printf("%s\n",name);

	return 0;
}
