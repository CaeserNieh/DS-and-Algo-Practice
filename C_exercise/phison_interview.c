/*
http://shihweiyao.pixnet.net/blog/post/221520785-%E7%BE%A4%E8%81%AF%E9%9D%A2%E8%A9%A6-%E9%9F%8C%E9%AB%94%E5%B7%A5%E7%A8%8B%E5%B8%AB
考古題
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void question1(int *ar, int limit);
void question2_myversion( const int *ar, const int limit, int b);
void question2_answer_from_web( const int *ar, const int size, int b)

#define NULL 0xFFFF

struct ListStruct{	
	int DataH;
	int DataL;
	int Nextint;
};
struct ListStruct array[1000];
int ListHead = 0;

int main(void){
	int a[20] = {1,5,9,11,18,21,23,53,200,230,330,331,332,333,400,401,405,430,450,480};
	int num = 20;
	int b = 3;
	//question1(a,num);
	question2(a,num,b);



	return 0;
}

/*
Solution : 
http://l4disgreat.blogspot.tw/2016/04/blog-post.html
*/

int searchListStruct(int datah,int dataL){
	int pre = NULL, now = ListHead;
	while(now != NULL){
		if(array[now].DataH == datah && array[now].DataL == dataL ){
			printf("Found it\n");
		}
		pre = now;
		now = array[now].Nextint;
	}
	printf("Not Found\n");
	return -1;
}

int searchListStruct2(int data_a,int data_b){
	int pre = NULL,now = ListHead;
	int search = 0;
	while(now != NULL){
		if(( array[now].DataH << 4+array[now].DataL ) == ( data_a << 4+data_b )){
			if (pre == NULL){
				printf("Entry = ListHead; Pre = NULL\n");
				search = 1;
			}
			else{
				printf("FoundEntry = %d ; PreEntry = %d\n",FoundEntry,PreEntry);
				search = 1;
			}
		}
		if(( array[now].DataH << 4+array[now].DataL ) > ( data_a << 4+data_b )){
			break;
		}else{
			pre = now;
			int now = array[now].Nextint;
		}

	}

}


/*
給你一個sort好的陣列a[20]，然後請你印出0~500的數字，
如果數字在a[20]裡面，則不要印出，請你用最少的cpu和memory
*/
void question1(int *ar, int limit){
	printf("%d",ar[2]);
	int i;
	int index = 0;
	for(i = 0 ; i<=500 ; i++){
		if(i == ar[index] && index<20){
			index++;
		}else{
			printf("%d\n", i);
		}
	}
}//void questino1

/*
類似上題，function給一個數字b=0,1,2,3,4時，
分別印出0~99,100~199,200~299,300~399,400~499之中，
不在a[20]裡面的數字，也是用最少的CPU跟memory。
*/
void question2_myversion( const int *ar, const int limit, int b){
	int i;
	int index = 0;
	for(i = b*100 ;i <(b+1)*100 ;i++){
			if(b < 0 || b > 5){
				return ;
			}
			if(index<limit && ar[index] > (b+1)*100){
				index = index+limit;
			}
			if(i > ar[index]){
				int j;
				for(j = 0;j < limit;j++){
					if(i > ar[index]){
						index++;
					}
					else{
						continue;
					}
				}

			}
			if(i == ar[index] && index < limit){
				index++;
			}else{
				printf("%d ", i);
			}
	}

}
void question2_answer_from_web( const int *ar, const int size, int b){
	int i = 0,index = 0;
	if(b < 0|| b > 5) return;
	for(i = b*100;i < (b+1)*100; b++){
		if(index < size && ar[index] >  (b+1)*100){
			index = size+1;
		}
		if(index < size && ar[index] == i){
			index++;
		}
		else{
			printf("%d\n", i);
		}
	}//for


}
