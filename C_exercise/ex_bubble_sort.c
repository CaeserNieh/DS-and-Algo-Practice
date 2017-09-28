#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void bubbleSort(int *arr);


int main(){
	int arr[] = {1,3,59,4,7,89,2};
	printf("%p\n",arr);
	printf("%zu\n",sizeof(arr));	
	printf("%zu\n",sizeof(int));
	bubbleSort(arr);
	
	return 0;
}


void bubbleSort(int *arr){
	printf("%p\n",arr);
	printf("%d\n",sizeof(arr));	
	printf("%zu\n",sizeof(arr[0]));


}
