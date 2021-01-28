#include <stdio.h>
#include<stdlib.h>
int n;
void main(){
   int *p;
   printf("Enter no of elements:");
   scanf("%d",&n);  
   p= (int*)malloc(n*sizeof(int));
   for(int i=0;i<n;i++){
	 printf("\nEnter data %d : ",i+1);
     scanf("%d",(p+i));	 
   }
   printf("\nThe Elements in Arrays is : \n");
   for(int i=0;i<n;i++){
	   printf("%d\t",*(p+i));
   }
   return;
}