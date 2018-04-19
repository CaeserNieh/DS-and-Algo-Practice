//uva_11094
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int m,n,i,j,sum,ans;
char map[21][21];
char used[21][21];
char land;

void dfs(int x,int y){
	if(y<0){
		y = m-1;
	}
	if(y>=m){
		y = 0;
	}
	if(x<0 || x>=n){
		return ;
	}
	if(used[x][y] != 0 || map[x][y] != land){
		return ;
	}
	used[x][y] = 1;
	sum++;
	dfs(x+1,y);
	dfs(x,y+1);
	dfs(x-1,y);
	dfs(x,y-1);
}

int main(void){

	while(scanf("%d %d",&n,&m) == 2){
		for(i = 0;i<n;i++){
			for(j = 0;j<m;j++){
				scanf("%s",map[i][j]);
				used[i][j] = 0;
			}
		}
		scanf("%d %d",&i,&j);
		land = map[i][j];
		dfs(i,j);
		ans = 0;
		ans = sum;
		for(i = 0;i<n;i++){
			for(j = 0;j<m;j++){
				sum = 0;
				dfs(i,j);
				if(sum > ans){
					ans = sum;
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}