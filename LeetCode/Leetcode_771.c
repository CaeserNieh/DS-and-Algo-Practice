#include <stdio.h>
#include <stdio.h>
#include <string.h>

/*
Input: J = "aA", S = "aAAbbbb"
Output: 3

Input: J = "z", S = "ZZ"
Output: 0
*/

int numJewelsInStones(char* J, char* S);

int main(void){
	char *j = "z";
	char *s = "ZZZ";
	
	int ans;
	ans = numJewelsInStones(j,s);
	printf("%d\n",ans);
	return 0;
}

/*
size_t len = strlen(J);
printf("%zd\n",len);

J = "aA"
sizeof(J) = 8 bytes
char = 4 bytes
*/

int numJewelsInStones(char* J, char* S)
{
	//printf("%c\n",*(J+1));
	int count = 0;
	int i,j;
	
	for(i = 0;i < strlen(J);i++){
		for(j = 0; j < strlen(S);j++){
			if(*(J+i) == *(S+j)){
				count++;
			}
			//printf("%c ",*(S+j));
		}
	}

	return count;
}
