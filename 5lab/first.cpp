#include <stdio.h>
#include <math.h>

int isPerfect(int num) {
    if (num <= 1) return 0;
    int sum = 1;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }
    return sum == num;
}
int main(){
    int A[10][15];
    int B[15][10];
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 15; j++){
            A[i][j] = rand()%10;
        }
    }
    for (int i = 0; i < 15; i++){
        for (int j = 0; j < 10; j++){
            B[i][j] = rand()%10;
        }
    }
    printf("Матрица A до замены:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 15; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("Матрица B до замены:\n");
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 15; j++){
            if (isPerfect(A[i][j])){
                A[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < 15; i++){
        for (int j = 0; j < 10; j++){
            if (isPerfect(B[i][j])){
                B[i][j] = 0;
            }
        }
    }
    printf("Матрица A после замены:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 15; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("Матрица B после замены:\n");
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;

}