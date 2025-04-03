// program to find the determinant of 2*2 matrix
#include <stdio.h>
int main(){
	int matrix[2][2];
	printf("Enter the matrix \n");
	
	//reading elements
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("Enter %d row, \n %d coloumn element : \t",i+1,j+1);
			scanf("%d",&matrix[i][j]);
			}
		}
	
	//calculating the determinant
	int det=0;
	det = (matrix[0][0]*matrix[1][1])-(matrix[0][1]*matrix[1][0]);

	//displaying the matrix
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%d \t",matrix[i][j]);
			}
			printf("\n");
		}
		
	printf("The determinant of the given matrix is %d \n",det);
	}
