#include<stdio.h>

int main(){
    int size;
    int matrixOne[100][100], matrixTwo[100][100], product[100][100],i,j,k;
    printf("Enter the size of the square matrix: ");
    scanf("%d",&size);

    printf("\n Enter the first Matrix: \n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("Enter element: ");
            scanf("%d",&matrixOne[i][j]);
        }
    }

    printf("Enter the second Matrix: \n");
    for(int i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("Enter element: ");
            scanf("%d",&matrixTwo[i][j]);
        }
    }

    // Matrix Multiplication
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            for(int k=0;k<size;k++){
                product[i][j] = product[i][j] + (matrixOne[i][k] * matrixTwo[k][j]);
            }
        }
    }

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("%d", product[i][j]);
        }
    }
return 0;
}