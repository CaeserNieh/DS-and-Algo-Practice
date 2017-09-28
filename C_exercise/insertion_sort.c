#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void insertion_sort(int *ar,int);
void swap(int *,int *);
void print_ar(int *ar,int length);

int main(void){

	int ar[] = {11,10,9,8,7,6,5,4,3,2,1};
	int length = sizeof(ar) / sizeof(int);
	insertion_sort(ar,length);
	print_ar(ar,length);

}

void print_ar(int *ar,int length){
	int i;
	for(i = 0;i < length;i++){
		printf("%d ",ar[i]);
	}
	printf("\n");
}

void insertion_sort( int *ar ,  int length ){
	int i,j;
	for(i = 0;i < length-1;i++){
		for(j = i+1;j >0;j--){
			if(ar[j-1] >ar[j]){
				swap(&ar[j-1],&ar[j]);
			}
		}
		//print_ar(ar,length);
	}
}


void swap( int *a ,int*b ){
	*a = *a^*b;
	*b = *a^*b;
	*a = *a^*b;
}
