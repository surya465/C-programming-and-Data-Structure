#include <stdio.h>
void Brand();
void main(){
	int n;
	printf("Enter the number of Elements : ");
	scanf("%d",&n);
	//enter the values into an array
	int arr[n];
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
	//Unique elements in an Array
	printf("\n After removing duplicate  elements in the array : ");
	for(int i=0;i<n;i++){
		int ctr=0;
		for(int j=0;j<n;j++){
			if(i!=j){
			if(arr[i]==arr[j])
				ctr++;
			}			
		}
		
		if(ctr==0){
			printf("%d\t",arr[i]);
		}
	}
	Brand();
	
}
void Brand(){
	printf("\n\n-----Code by Suresh Chidurala-----\n");
	printf("-------<-> Happy Coding <->-------\n");
}