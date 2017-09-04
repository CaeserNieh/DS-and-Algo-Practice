#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	/*靜態配置記憶體*/
	int a[2][2] = {{1,2},{3,4}};
	int b[2][2] = {{5,6},{7,8}};
	int c[2][2];
	int i,j,counter;


/*  動態記憶體配置 */

	int **arr;
	
	printf("input double array arr[i][j]'s i\n");
	scanf("%d",&i);

	printf("input double array arr[i][j]'s j\n");
	scanf("%d",&j);

	
	arr = (int **)malloc(sizeof(int*) * i);

	for(counter = 0;counter < i;counter++){
		arr[counter] = (int *)malloc(sizeof(int) * j);
	}

	int counter_i,counter_j;

	for(counter_i = 0;counter_i < i;counter_i++){
		for(counter_j = 0;counter_j < j;counter_j++){
			scanf("%d",&arr[counter_i][counter_j]);
		}
	}

	for(counter_i = 0;counter_i < i;counter_i++){
		free(arr[counter_i]);
	}	
	free(arr);

}
