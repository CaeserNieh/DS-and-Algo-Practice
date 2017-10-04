#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LENGTH 11

void heapSort(int *);

void heapify(int *arr, int root,int len);

void swap(int *maxnode, int *root);


int main(void)
{
	int data[11] = {1,2,3,4,5,6,7,8,9,10,11};

	heapSort(data);
	
	return 0;
}

/*
heapify（堆積化）：

Root的左、右子樹皆符合 Heap，僅 Root 不符合 Heap
Root、左子元素、右子元素3個元素中，最大者為MaxNode
Root = MaxNode => 結束
若左子元素或右子元素 = MaxNode
Root 與 MaxNode 作對調 (Swap)
若對調完的 Root 有子節點 => 對原來的 Root 作 Heapify

這步驟主要是要讓整棵樹符合heap，所以一直作root 跟左右children比較大小
mix heap 是要最大的數字為root
*/
void heapify(int *arr, int root,int len){
	int leftchild = root*2+1;
	int rightchild = root*2+2;
	int maxnode;
	if(leftchild < len && arr[leftchild] > arr[root]){
		maxnode = leftchild;
	}
	else{
		maxnode = root;
	}
	if(rightchild < len && arr[rightchild] > arr[maxnode]){
		maxnode = rightchild;
	}
	if(maxnode != root){
		swap(&arr[maxnode],&arr[root]);
		heapify(arr,maxnode,len);
	}

}

void heapSort(int *arr){
	int i;
	for(i = (LENGTH/2)-1 ;i >= 0;i--){
		heapify(arr,i,LENGTH);
	}
/*
	for(i = 0;i<LENGTH;i++){
		printf("%d ",arr[i]);
	}
	printf("\n\n");
*/

/*
把第一個數字(最大的)跟最後一位swap，
在去作max heap 讓第二大的數字浮上root
再把第2大的數字放在倒數第2位
依序下去作sort
*/
	for(i = LENGTH-1;i > 0;i--){
		swap(&arr[i],&arr[0]);
		heapify(arr,0,i);
	}
	
	for(i = 0;i<LENGTH;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}


void swap(int *maxnode, int *root){
	*maxnode = *maxnode ^ *root;
	*root = *maxnode ^ *root;
	*maxnode = *maxnode ^ *root;
}

