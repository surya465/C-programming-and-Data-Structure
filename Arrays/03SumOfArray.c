#include <stdio.h>
void Brand();
void main(){
	int sum=0;
	int n, arr[100];
	printf("Enter the number of Elements : ");
	scanf("%d",&n);
	//enter the values into an array
	for(int i=0;i<n;i++){
		printf("Enter %d Element :",i+1);
		scanf("%d",&arr[i]);
	}
	//print the values of an array
	printf("the elements in the array :\n");
    printf("---------------------------\n");
	for(int i=0;i<n;i++){
		printf("%d \t",arr[i]);
	}
	//sum of elements in an array
	for(int i=0;i<n;i++){		
		sum=sum+arr[i];
	}
	printf("\nSum : %d",sum);
	Brand();
}
void Brand(){
	printf("\n-----Code by Suresh Chidurala-----\n");
	printf("-------<-> Happy Coding <->-------\n");
}