#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node * link;
}*head;
int n , k=1;
void CreateList(int n);
void DispalyData();
void ReverseData(struct node *prev , struct node *curr);
void Brand();
int main(){
	printf("The program to Reverse Linked List :\n");
	printf("-------------------------------------\n");
	printf("Enter the number of nodes :");
	scanf("%d",&n);
	CreateList(n);
	printf("Data in the Linked list\n");
	printf("-----------------------\n");
	DispalyData();
	printf("Reversed data in the Linked list\n");
	printf("--------------------------------\n");	
	ReverseData(NULL,head);
	Brand();
	return 0;
}
void CreateList(int n){
	struct node *next, *temp;
	int Data;
	head =(struct node *)malloc(sizeof(struct node));
	if(head==NULL){
		printf("Memory is not allocated");
	}else{
		printf("Enter data 1 :");
		scanf("%d",&Data);
		head->data=Data;
		head->link=NULL;
		temp=head;
		for(int i=2;i<=n;i++){
		    next =(struct node *)malloc(sizeof(struct node));
			printf("Enter data %d :",i);
			scanf("%d",&Data);
			if(next==NULL){
                printf("Memory is not allocated");
				break;
			}else{
				next->data=Data;
				next->link=NULL;
				temp->link=next;
				temp=temp->link;
			}
		}
	}
}
void DispalyData(){
	struct node *t;
	t=head;
	while(t){
		for(int i=1 ;i<=n;i++){
		printf("The Data at %d node:%d\n",i,t->data);
		t=t->link;
		}
	}
	
}
void ReverseData(struct node *prev , struct node *curr ){
	
	if(curr){
		ReverseData(curr,curr->link);
		curr->link=prev;
		
		printf("The Data at %d node:%d\n",k++,curr->data);
	}else{
	head=prev;
	}	
}
void Brand(){
	printf("-----Code by Suresh Chidurala-----\n");
	printf("-------<-> Happy Coding <->-------\n");
}