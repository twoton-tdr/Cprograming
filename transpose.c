//Program to print the transpose of a given matrix
#include <stdio.h>
int main(){
	int rows = 0 , columns = 0;
	printf("Enter the number of rows and colomns \n");
	scanf("%d %d",&rows,&columns);
	
	//checking the validity of the matrix
	if(rows<1 || columns < 1){
		printf("Error : Enter a valid matrix");
		return 1;
		}
		
	int matrix[rows][columns];
	
	//reading the matrix
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			printf("Enter %d row, %d coloumn element : \t",i+1,j+1);
			scanf("%d",&matrix[i][j]);
			}
		}

	//displaying the matrix
	printf("Current Matrix \n ");
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			printf("%d \t",matrix[i][j]);
			}
			printf("\n");
		}

	//displaying the transpose matrix
	printf("Transpose Matrix \n");
	for(int i = 0;i<columns;i++){
		for(int j = 0 ; j<rows;j++){
			printf("%d \t",matrix[j][i]);
			}
			printf("\n");
		}
	return 0;
	}
