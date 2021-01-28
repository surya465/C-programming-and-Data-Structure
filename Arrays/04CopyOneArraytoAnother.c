#include <stdio.h>
void Brand();
void main(){
	int n, arr[100], arr2[100];
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
	//copy one array to another
	for(int i=0;i<n;i++){
		arr2[i]=arr[i];
	}
	//print the values of an array
	printf("\nthe elements in the array2 :\n");
    printf("---------------------------\n");
	printf("Array 2 :");
	for(int i=0;i<n;i++){		
		printf("%d \t",arr2[i]);
	}
	
	Brand();
}
void Brand(){
	printf("\n-----Code by Suresh Chidurala-----\n");
	printf("-------<-> Happy Coding <->-------\n");
}