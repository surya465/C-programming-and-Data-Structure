#include <stdio.h>
void Brand();
void main(){
	int n1,n2,n3,k;
	//array 1
	printf("Enter array 1 size : ");
	scanf("%d",&n1);
	//enter the values into an array
	int arr1[n1];
	for(int i=0;i<n1;i++){
		printf("Enter %d Element :",i+1);
		scanf("%d",&arr1[i]);
	}
	//print the values of an array
	printf("the elements in the array 1 :\n");
    printf("---------------------------\n");
	for(int i=0;i<n1;i++){
		printf("%d \t",arr1[i]);
	}
	//array 2
	printf("\nEnter array 2 size : ");
	scanf("%d",&n2);
	//enter the values into an array
	int arr2[n2];
	for(int i=0;i<n2;i++){
		printf("Enter %d Element :",i+1);
		scanf("%d",&arr2[i]);
	}
	//print the values of an array
	printf("the elements in the array 2 :\n");
    printf("---------------------------\n");
	for(int i=0;i<n2;i++){
		printf("%d \t",arr2[i]);
	}
    // Combined array 3
	n3=n1+n2;
	int arr3[n3];
	for(k=0;k<n1;k++){
		arr3[k]=arr1[k];
	}
	for(int i=0;i<n3;i++){
		arr3[k]=arr2[i];
		k=k+1;
	}
	//print the values of an array
	printf("\nthe elements in the combined array 3 :\n");
    printf("---------------------------\n");
	for(int i=0;i<n3;i++){
		printf("%d \t",arr3[i]);
	}
	printf("\nSorted array is :");
	//Sorting the array 
	for(int i=0;i<n3;i++){
		for(int j=i+1;j<n3;j++){
				if(arr3[i]>=arr3[j]){
					arr3[i]=arr3[j];
				}	
		}
		
	}
	for(int i=0;i<n3;i++){
		printf("%d \t",arr3[i]);
	}
	Brand();
	
}
void Brand(){
	printf("\n\n-----Code by Suresh Chidurala-----\n");
	printf("-------<-> Happy Coding <->-------\n");
}