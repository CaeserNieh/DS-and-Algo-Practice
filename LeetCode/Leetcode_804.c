#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int uniqueMorseRepresentations(char** words, int wordsSize); 

/*

printf("%d\n",sizeof(char *));
printf("%s\n",*(words+1));
printf("%d\n",sizeof(words)/sizeof(char *));

*/

int main(void){
	
	char *words[] =  {"gin", "zen", "gig", "msg"};
	char *morse[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

	int wordsSize = sizeof(words) / sizeof(char *);

	uniqueMorseRepresentations(words,wordsSize);
	
	//prac(morse,words);
	return 0;
}

int prac(char** morse,char** words){
	printf("%p\n",&morse);
	printf("%s\n",*morse);
	char *ptr = *morse;
	printf("%c\n",*ptr);

	printf("%s\n",*(words+1));
	char *word = *words;
	printf("%d\n",*word);
	char mins = 'a';
	int len = *word - mins;
	printf("%d\n",len);
	printf("%s\n",*(morse+len));

}

int uniqueMorseRepresentations(char** words, int wordsSize) {
//	printf("%s\n",*words);
	char *ans[wordsSize];
	ans[0] = "---*";
	ans[1] = "....ffdf";
	printf("%s\n",*(ans+1));
}
