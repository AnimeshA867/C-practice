//Program to do matrix multiplication.

#include<stdio.h>
void main(){
    int row1,col1, row2,col2;
    printf("Enter the row and column of the first matrix:");
    scanf("%d %d",&row1,&col1);
    printf("Enter the row and column of the second matrix:");
    scanf("%d %d",&row2,&col2);

    int mat1[row1][col1], mat2[row2][col2],multi[row1][col2];

    if(col1==row2){
        for(int i=0;i<row1;i++){
            for(int j=0;j<col1;j++){
                printf("Enter the matrix element of matrix first:");
                scanf("%d",&mat1[i][j]);
            }
        }
        for(int i=0;i<row2;i++){
            for(int j=0;j<col2;j++){
                printf("Enter the matrix element of matrix second:");
                scanf("%d",&mat2[i][j]);
            }
        }

        for(int i=0;i<row1;i++){
            for(int j=0;j<col2;j++){
                multi[i][j]=0;
                for(int k=0;k<row2;k++){
                    multi[i][j]+=mat1[i][k]*mat2[k][j];
                }
            }
        }
        for(int i=0;i<row1;i++){
            for(int j=0;j<col2;j++){
                printf("%d\t",multi[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("The matrix multiplication is not possible.");
    }
}