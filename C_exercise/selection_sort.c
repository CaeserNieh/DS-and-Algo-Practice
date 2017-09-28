#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void selection_sort( int *, int );
void swap(int * , int *);
void print_ar(int *, int );

int main(void){
	int ar[] = {11,10,9,8,7,6,5,4,3,2,2,1};
	int length = sizeof(ar) / sizeof(int);
	print_ar(ar,length);
	selection_sort( ar, length );
	print_ar(ar,length);
}


void swap(int *a , int *b){
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

void selection_sort(int *ar, int length){
	int min, i ,j;
	for(i = 0;i < length;i++){
		min = i;
		for(j = i+1; j < length ;j++){
			if(ar[j] < ar[min]){
				min = j;
			}
		}
		if( i != min){
			swap(&ar[i],&ar[min]);
			print_ar(ar,length);
		}
	}
}

void print_ar(int *ar, int length){
	int i ;
	for(i = 0 ; i < length ; i++){
		printf("%d ",ar[i]);
	}
	printf("\n");
}