#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
	boolean  true == 1
	boolean  false == 0
*/

int main()
{
	int i = 3;
	int j = 5;
	int k;
	//scanf("%d",&i);
	//scanf("%d",&j);

	k = (i==3);
	printf("%d\n",k);

	k = (i==j);
	printf("%d\n",k);


	int a = 3;
	int b = 3;
	int c = 0;

	// a,b : true  c:false
	k = (a && b);
	printf("%d\n",k);

	k = (a && c);
	printf("%d\n",k);

	k = (a || b);
	printf("%d\n",k);

	k = (a || c);
	printf("%d\n",k);

	k = !a;
	printf("%d\n",k);

	k = !c;
	printf("%d\n",k);


	return 0;
}