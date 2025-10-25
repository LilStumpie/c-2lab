#include <stdio.h>
#include <stdlib.h>

int main(void){
    int rows = 5, col = 5;
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(col * sizeof(int));
    }
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < col; j++){
            matrix[i][j] = (i + 1)*(j + 1);
        }
    }
    printf("new matrix \n");
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < col; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < rows; i++){
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}