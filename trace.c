//Program to find the trace from the given matrix
#include <stdio.h>
int main(){
	int squareMat;
	printf("Enter the number of rows and colomns \n");
	scanf("%d",&squareMat);
	
	//checking the validity of the matrix
	if(squareMat<1){
		printf("Error : Enter a valid matrix");
		return 1;
		}
		
	int matrix[squareMat][squareMat];
	
	
	for(int i=0;i<squareMat;i++){
		for(int j=0;j<squareMat;j++){
			printf("Enter %d row, %d coloumn element : \t",i+1,j+1);
			scanf("%d",&matrix[i][j]);
			}
		}
	
	//displaying the matrix
	for(int i=0;i<squareMat;i++){
		for(int j=0;j<squareMat;j++){
			printf("%d \t",matrix[i][j]);
			}
			printf("\n");
		}
		
	//finding the trace
	int trace = 0;
	for(int i = 0 ; i < squareMat; i ++){
		trace+=matrix[i][i];
		}
	printf("The trace of this matrix is : %d \n",trace);
	return 0;
	}
