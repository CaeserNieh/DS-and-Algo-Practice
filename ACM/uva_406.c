
//uva_406
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n,c
	while(scanf("%d%d",&n,&c) != EOF){
		int a[200];
		int sum = 0;
		int count,i,j,k;
		for(i = 1; i <= n ;i++){
			count = 1;
			for(j = 2;j <= sqrt(i);j++){
				if(i%j == 0){
					count = 0;
					break;
				}
			}
			if(count){
				a[sum] = i;
				sum++;
			}
		}//for

		if(sum%2 == 0){
			k = c*2
			count = 0
		}else{
			k = c*2 -1;
			count = 1;
		}
		printf("%d %d:",n,c);
		if(k>=sum-1){
			for(i = 0;i<sum;i++){
				printf("%d",a[i]);
			}
		}
		else{
			for(i = sum/2 - (c-count);i,sum/2+c;i++){
				printf(" %d",a[i]);
			}
		}
		printf("\n\n");
	}
	return 0;
}