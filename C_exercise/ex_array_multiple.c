#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	int n;
	scanf("%d",&n);
	
	int **arr1,**arr2,**arr3;
	arr1 = (int**)malloc(sizeof(int*) * n);
	arr2 = (int**)malloc(sizeof(int*) * n);
	arr3 = (int**)malloc(sizeof(int*) * n);
	
	int i,j,k;
	
	for(i = 0;i<n;i++){
		arr1[i] = (int*)malloc(sizeof(int*) * n);
	}

	for(i = 0;i<n;i++){
		arr2[i] = (int*)malloc(sizeof(int*) * n);
	}

	for(i = 0;i<n;i++){
		arr3[i] = (int*)malloc(sizeof(int*) * n);
	}
	
	for(i = 0;i<n;i++){
		for(j = 0;j<n;j++){
			scanf("%d",&arr1[i][j]);
		}
	}

	for(i = 0;i<n;i++){
		for(j = 0;j<n;j++){
			scanf("%d",&arr2[i][j]);
		}
	}


	for(i = 0;i<n;i++){
		for(j = 0;j<n;j++){
			for(k = 0;k<n;k++){
				arr3[i][j] += arr1[i][k]*arr2[k][j];
			}
		}
	}

	

	for(i = 0;i<n;i++){
		for(j = 0;j<n;j++){
			printf("%d ",arr3[i][j]);
		}
		printf("\n");
	}
}
