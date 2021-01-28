#include <stdio.h>
void Brand();
void main(){
	int n,i,j,a;
	//array 1
	printf("Enter array size : ");
	scanf("%d",&n);
	//enter the values into an array
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter %d Element :",i+1);
		scanf("%d",&arr[i]);
	}
	//print the values of an array
	printf("the elements in the array 1 :\n");
    printf("---------------------------\n");
	for(int i=0;i<n;i++){
		printf("%d \t",arr[i]);
	}
	printf("\nSorted array is Ascending:");
	//Sorting the array 
	for(int i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>=arr[j]){
				a=arr[i];
				arr[i]=arr[j];
				arr[j]=a;
			}
    	   	
		}
	}
	for(i=0;i<n;i++){
		printf("%d \t",arr[i]);
	}
	
	Brand();
	
}
void Brand(){
	printf("\n\n-----Code by Suresh Chidurala-----\n");
	printf("-------<-> Happy Coding <->-------\n");
}