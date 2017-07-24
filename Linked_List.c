#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define array_length 255

typedef struct new_node
{
	int num;
	char name[array_length];
	struct new_node *next;
}Node;

/*
定義一個 new_node 的type 並命名為 Node
在這個struct 理有一個 next pointer指向 new_node type的 stuct
*/


void Add_New_Node(char name[],int number, Node *head, Node *current){

	

}

void List_Linked_List(Node *head,Node *temp_node){
	temp_node = head;
	while(temp_node != NULL){
		printf("Node---------------------\n");
		printf("%s\n",temp_node->name);
		printf("%d\n",temp_node->num);
		temp_node = temp_node-> next;
	}
}

int search_Linked_List(char name[],Node *head, Node *temp_node){
	printf("in search_Linked_List\n");
	temp_node = head;
	int temp_count = 0;
	while(temp_node != NULL){
		if(strcmp(name,temp_node->name) == 0){
			break;
		}
		temp_count++;
		temp_node = temp_node->next;
	}
	return temp_count;
}



int main(){

	int num,number;
	char name[array_length];

	Node *head = NULL;
	Node *current = NULL;
	Node *temp_node = NULL;

	int keep_running = 1;
	int i;
	int sequence_num;

	while(keep_running){
		printf("Choose one option : \n");
		printf("1. Add New Node \n");
		printf("2. Insert New Node \n");
		printf("3. List Linked List \n" );
		printf("4. Delete Node \n");
		printf("5. Exit \n");
		printf("Enter your choice : ");
		scanf("%d",&num);
		switch(num){
			case 1:
				printf("Input Name and Number : \n");
				scanf("%s",name);
				scanf("%d",&number);

				current = (Node*)malloc(sizeof(Node));
				current->num = number;
				strncpy(current->name,name,array_length);
				current->name[array_length] = '\0';
				current->next = NULL;

				if(head == NULL){
					head = current;
					printf("%d\n",head->num);
					printf("%s\n",head->name);
					printf("This is first Node in Linked List!! \n");
				}else{
					// head != NULL
					if(head->next == NULL){
						printf("head->next = null \n");
						head->next = current;
					}else{
						//head -> next != NULL
						temp_node = head->next;
						while(temp_node->next != NULL){
							temp_node = temp_node->next;
						}
						temp_node->next = current;
					}	
				}
				break;
			case 2:
				printf("Which Node do you want to Insert After\n");
				printf("Enter the sequence : ");
				scanf("%d",&sequence_num);
				temp_node = head;
				for(i = 0;i < sequence_num-1;i++){
					temp_node = temp_node->next;
				}
				printf("Input Name and Number : \n");
				scanf("%s",name);
				scanf("%d",&number);

				current = (Node*)malloc(sizeof(Node));
				current->num = number;
				strncpy(current->name,name,array_length);
				current->name[array_length] = '\0';
				current->next = temp_node->next;
				temp_node->next = current;


				break;
			case 3:
				List_Linked_List(head,temp_node);
				break;
			case 4:
				printf("Input the name you want to delete :\n");
				scanf("%s",name);
				int delete_num = search_Linked_List(name,head,temp_node);
				printf("%d\n", delete_num);
				break;
			case 5:
				keep_running = 0;
				printf("Bye Bye ~~~");
				break;

		}//switch

	} // while 



	return 0;
} // int main()