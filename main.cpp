#include <stdio.h>

//------------------------------1 вариант-----------------------------------

int main(void) {
    int array[25];
    int Newa[25];
    int newaidx = 0;

    for (int i = 0; i < 25; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 25; i++) {
        int c = 0;
        for (int j = 0; j < 25; j++) {
            if (array[j] == array[i]) {
                c++;
            }
        }
        if (c == 1) {
            Newa[newaidx] = array[i];
            newaidx++;
        }
    }

    for (int i = 0; i < newaidx; i++) {
        printf("%d ", Newa[i]);
    }
    printf("\n");

    return 0;
}