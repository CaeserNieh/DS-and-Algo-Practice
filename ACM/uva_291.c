#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int matrix[5][5] = {
		{0,1,1,0,1},
		{1,0,1,0,1},
		{1,1,0,1,1},
		{0,0,1,0,1},
		{1,1,1,1,0}
};

int ans[9] = {0};

int DFS(int node_idx, int n){
	int i;
	//record ans
	ans[n] = node_idx+1;
	if(n == 8){
		for(i = 0;i < 9;i++){
			printf("%d ",ans[i]);
		}
		printf("\n");
	}
	
	for(i = 0;i < 5;i++){
		// i another node find next round

		//printf("node_idx : %d ",node_idx);
		//printf("n : %d\n",n);
		if(matrix[node_idx][i] == 1){
			matrix[node_idx][i] = 0;
			matrix[i][node_idx] = 0;
			DFS(i,n+1);
			
			matrix[node_idx][i] = 1;
			matrix[i][node_idx] = 1;

		}
	}//for

}// Depth First Search


int main(void)
{
	DFS(0,0);

	return 0;
}// main
