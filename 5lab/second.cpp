#include <stdio.h>
#include <stdlib.h>

void sums(int matrix[9][6], int *array, int arraysize, int *sumPos, int *sumNeg){
    *sumPos = 0;
    *sumNeg = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 6; j++) {
            if (matrix[i][j] > 0) {
                *sumPos += matrix[i][j];
            }
        }
    }
    for (int i = 0; i < arraysize; i++) {
        if (array[i] < 0) {
            *sumNeg += array[i];
        }
    }
}

int main() {
    int X[9][6];
    int A[60];
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 6; j++){
            X[i][j] = (rand()%21) - 10;
        }
    }
    for (int i = 0; i < 60; i++){
        A[i] = (rand()%21) - 10;
    }
    int sumPos, sumNeg;
    sums(X,A, 60, &sumPos, &sumNeg);
    double Z = (sumPos + sumNeg) / 2;
    printf("Сумма положительных элементов X: %d\n", sumPos);
    printf("Сумма отрицательных элементов A: %d\n", sumNeg);
    printf("Z = (S1 + S2) / 2 = %.2f\n", Z);

    return 0;

}