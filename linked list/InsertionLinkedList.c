#include <stdio.h>
#include <stdlib.h>
struct node{
   int data;
   struct node *link;
}*head;
void CreateList(int n);
void PrintData();
void InsertAtBegin();
void InsertAtEnd();
void InsertAtMiddle();
void Brand();
int n;
int main(){
	printf("To Create the Linked List And Display data in Linked List:\n");
	printf("----------------------------------------------------------\n");
    printf(" Input the number of nodes : ");
	scanf("%d",&n);
    CreateList(n);
    printf("The data in the Linked List :\n");
	printf("-----------------------------\n");
    PrintData();
	printf("Inserting data in the Linked List  at the Begining :\n");
	printf("-------------------------------------------------------------\n");
	InsertAtBegin();
	printf("The data in the Linked List after Insertion :\n");
	printf("---------------------------------------------\n");
    PrintData();
	printf("Inserting data in the Linked List  at the End :\n");
	printf("-----------------------------------------------\n");
	InsertAtEnd();
	printf("The data in the Linked List after Insertion :\n");
	printf("---------------------------------------------\n");
    PrintData();
    printf("Inserting data in the Linked List  at the Middle :\n");
	printf("-----------------------------------------------\n");
	InsertAtMiddle();
    printf("The data in the Linked List after Insertion :\n");
	printf("---------------------------------------------\n");
    PrintData();
	Brand();
    return 0;	
}
//creating the linked list
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
//printing the linked list
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
// inserting at the Begining
void InsertAtBegin(){
	int Data;
	struct node *new = (struct node *)malloc(sizeof(struct node));
	printf("Enter the data node:");
	scanf("%d",&Data);
	if(new==NULL){
		printf("Memory is not allocated");
	}else{
	new->data=Data;
	new->link=NULL;
    }
    new->link=head;
    head=new;	
	n=n+1;
}
//inserting at the Ending
void InsertAtEnd(){
    int Data;
	struct node *new = (struct node *)malloc(sizeof(struct node));
	printf("Enter the data node:");
	scanf("%d",&Data);
	if(new==NULL){
		printf("Memory is not allocated");
	}else{
	new->data=Data;
	new->link=NULL;
    }
    struct node *p;
	p=head;
	while(p->link){
	   p=p->link;
	}
	p->link=new;
	n=n+1;
}

//inserting at the middle
void InsertAtMiddle(){
	int Data,position;
	struct node *new = (struct node *)malloc(sizeof(struct node));
	printf("Enter the data node:");
	scanf("%d",&Data);
	printf("After which data you want to enter:");
	scanf("%d",&position);
	if(new==NULL){
		printf("Memory is not allocated");
	}else{		
	new->data=Data;
	new->link=NULL;
    }
    struct node *p;
	p=head;
	while(p->data!=position){
	   p=p->link;
	}
	new->link=p->link;
	p->link=new;
	n=n+1;
}
void Brand(){
	printf("-----Code by Suresh Chidurala-----\n");
	printf("-------<-> Happy Coding <->-------\n");
}