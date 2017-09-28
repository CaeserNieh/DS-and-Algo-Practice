
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void bubble_sort(int *ar,int length);

void swap(int*,int*);
void print_ar(int *,int );

int main(void){
	int ar[] = {11,10,9,8,7,6,5,4,3,2,1};
	int length = sizeof(ar) / sizeof(int);
	
	bubble_sort(ar,length);
	print_ar(ar,length);



}


void bubble_sort(int *ar, int length){
	int i ,j;
	for(i = 0;i < length;i++){
		for(j = 0;j < length-i;j++){
			if( ar[j] > ar[j+1] ){
				swap( &ar[j] , &ar[j+1] );
			}
		}
		print_ar(ar,length);
	}
}// bubble

void swap(int *a, int *b){
	*a = *a^*b;
	*b = *a^*b;
	*a = *a^*b;
}

void print_ar(int *ar,int length){
	int i;
	for(i = 0;i < length;i++){
		printf("%d ",ar[i] );
	}
	printf("\n");
} 

