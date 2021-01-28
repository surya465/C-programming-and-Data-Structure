#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j,n,m,k=0;
	printf("\nEnter the number of Students : ");
	scanf("%d",&n);
	/*char names[n][20];*/
	printf("\nEnter the number of Subjects : ");
	scanf("%d",&m);
	char subject[m][20];
	int marks[n][m];
	for(i=0;i<m;i++){
	printf("Name of %d Subject: ",i+1);
    scanf("%s",&subject[i]);
	}
	char roll[n][20];
	for(i=0;i<n;i++){
		/*printf("Name of the student %d: ",i+1);
        scanf("%s",&names[i]);*/	
        printf("Enter Roll number :");
        scanf("%s",&roll[i]);
		for(int i=k;i<k+1;i++){
			for(j=0;j<m;j++){
				printf("Enter %s marks: ",subject[j]);
				scanf("%d",&marks[i][j]);
			}		
		}
		k=k+1;	 
	}
	printf("%d",k);
	printf("Roll number should be type :511");
	printf("\n");
	printf("STUDENT MARKS TABLE\n");
    printf("---------------------------------------------------------------------------\n");
	printf("Roll No ");
	printf("     |  ");
	for(i=0;i<m;i++){
	printf("%s",subject[i]);	
	printf("  |  ");
	}
	printf("\n---------------------------------------------------------------------------\n");
		for(i=0;i<n;i++){
			printf("%s",roll[i]);
			printf("          |  ");
			for(j=0;j<m;j++){
				printf("%d\t",marks[i][j]);
				printf("  |  ");
			}
			printf("\n");
		}
}