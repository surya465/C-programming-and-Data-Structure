#include <stdio.h>
#include <stdlib.h>
struct node{
   int data;
   struct node *link;
}*head;
void CreateList(int n);
void PrintData();
void DeleteAtFirst();
void DeleteAtLast();
void DeleteAtMiddle();
void Brand();
int n;
int main(){
	printf("To Create the Linked List And Display data in Linked List:\n ");
	printf("-------------------------------------------------------------\n");
    printf(" Input the number of nodes : ");
	scanf("%d",&n);
    CreateList(n);
    printf("The data in the Linked List :\n");
	printf("-----------------------------\n");
    PrintData();
	printf("Deleting the data at the begining of the Linked List :\n");
	printf("------------------------------------------------\n");
	DeleteAtFirst();
	printf("The data in the Linked List :\n");
	printf("-----------------------------\n");
    PrintData();
	DeleteAtLast();
	printf("Deleting the data at the End of the Linked List :\n");
	printf("------------------------------------------------\n");
	printf("The data in the Linked List :\n");
	printf("-----------------------------\n");
    PrintData();
	DeleteAtMiddle();
	printf("Deleting the data at the Middle of the Linked List :\n");
	printf("------------------------------------------------\n");
	printf("The data in the Linked List :\n");
	printf("-----------------------------\n");
    PrintData();
	Brand();
    return 0;	
}
void CreateList(int n){
	int Data,i ;
	struct node *next ,*temp;
	head = (struct node *)malloc(sizeof(struct node));
	if(head==NULL){
		printf("Memoey is not allocated:");
	}else{
		printf("Enter the data 1 :");
		scanf("%d",&Data);
		head->data = Data;
		head->link = NULL;
		temp=head;
		for(i=2;i<=n;i++){
		next = (struct node *)malloc(sizeof(struct node));
		 if(next==NULL){
			 printf("memory not allocated");
			 break;
		 }else{
		 printf("Enter the data %d :",i);
		 scanf("%d",&Data);
		 next->data= Data;
		 next->link=NULL;
		 temp->link=next;
		 temp=temp->link;
		}
	}
  }
}
void PrintData(){
	struct node *t;
	t=head;
	while(t){
		for(int i=1 ;i<=n;i++){
		printf("The Data at %d node:%d\n",i,t->data);
		t=t->link;
		}
	}
}
void DeleteAtFirst(){
	struct node * p;
	p=head;
	head=p->link;
	free(p);
	n=n-1;
}
void DeleteAtLast(){
	struct node * p;
	p=head;
	while(p->link->link){
		p=p->link;
	}
	struct node *t;
	t=p->link;
	p->link=NULL;
	free(t);
	n=n-1;
}
void DeleteAtMiddle(){
	struct node * p;
	p=head;
	int Data;
	printf("Which data you want to Delete :");
	scanf("%d",&Data);
	while(p->link->data!=Data){
		p=p->link;
	}
	struct node *t;
	t=p->link;
	p->link=t->link;
	free(t);
	n=n-1;
}
void Brand(){
	printf("-----Code by Suresh Chidurala-----\n");
	printf("-------<-> Happy Coding <->-------\n");
}
