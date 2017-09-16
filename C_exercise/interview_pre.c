/* 
練C，準備interview
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void question1();
void question2();
int strcpp(const char *source, const char *dest);
void question4();


int main(void)
{
	int temp_q3;

	question1();
	question2();

	char str_a[] = "Hello World";
	char str_b[] = "hello world";
	char *ptr_a,*ptr_b;
	ptr_a = str_a;
	ptr_b = str_b;
	
	//printf("c : %d\n",*(ptr_a+1));
	// 也可以這樣看char每一格裏面的值，只是說如果要讀string可以直接印ptr_a
	//printf("String : %s\n",ptr_a);

	temp_q3 = strcpp(ptr_a,ptr_b);
	//return 負數  因為str_a > str_b 有大寫
	printf("%d\n\n", temp_q3);

	question4();
	
	return 0;
}


void question1(){
	/*晨星考題  指標位置會隨著++ 而有所變化*/
	printf("Question 1 !!!\n");
	int a[] = {6,7,8,9,10,11};
	int *p = a;
	// p指到的是這個array第一個值，印完以後再++
	printf("%d\n",*(p++));
	// p已經指到7了
	printf("%d\n",*(p));
	// p先++完後在印
	printf("%d\n",*(++p));

	int *p_ar = a;
	*(p_ar++)+=123;
	// a[0] = a[0] + 123;
	*(++p_ar)+=123;
	// a[2] = a[2] + 123;

	int i ;
	for(i = 0;i<6;i++){
		printf("%d ", a[i]);
	}
	printf("\n\n");
}

void question2(){
	printf("Question 2 !!!\n");
	char str[] = "Hello World";
	int n = 10;
	char *p_char = str;
	printf("str size : %zu\n", sizeof(str));
	printf("p_char size : %zu\n",sizeof(p_char));
	printf("int size : %zu\n", sizeof(n));
	printf("%d\n", *p_char);// 大寫H的ascii碼
	printf("%s\n", p_char); // Hello World !!!

	printf("\n");
}


/*
參考 : 
https://dotblogs.com.tw/ace_dream/2016/01/07/strcmp_strncmp
*/
int strcpp( const char *source, const char *dest){
	/*晨星考題  實作strcmp  function*/
	printf("Question 3 !!!\n");
	printf("%c\n",*(source));// 印第一位H
	printf("%c\n",*(dest));//印第一位h

	if(*source == '\0' && *dest != 0){
		return (*source - *dest);
	}
	if(*source != 0 && *dest == '\0'){
		return (*source - *dest);
	}
	for(;*source != '\0' && *dest != '\0'; source++,dest++){
		if((*source - *dest) > 0){
			return (*source - *dest);
		}
		else if((*source - *dest) < 0){
			return (*source - *dest);
		}
	}
	return 0;
}

/*
a[1] =*(a+1) =* (p+1) = *(p_ar+1)
int *p_ar =  (int*)(&a)
*/
void question4(){
	printf("Question4 !!!!\n");
	int a[5] = {1,2,3,4,5};
//	int *p = a;
	int *p_ar = (int*)(&a+1);
	printf("%p\n",a);
	printf("%p\n",&a);
	printf("%p\n",&a+1);
	printf("p_ar:0x%0x\n",&(p_ar));
	printf("p_ar:%p\n",*(p_ar));
	printf("p_ar:%d\n",*(p_ar));
	printf("p_ar:%p\n",&a+1);

}

