#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int mainsum = 0, sidesum = 0;
    int rowidx = 0, colidx = 0;
    int rows = 7, cols = 7;
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++){
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            matrix[i][j] = rand()%10;
        }
    }
    printf("matrix: \n");
    for (int i = 0; i < rows; i++){
        mainsum += matrix[i][i];
        sidesum += matrix[i][rows - 1 - i];
    }
    int res = mainsum - sidesum;
    printf("сумма главной диагонали %d \n", mainsum);
    printf("сумма побочной диагонали %d \n", sidesum);
    printf("result = %d ", res);
    printf("\n");
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
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