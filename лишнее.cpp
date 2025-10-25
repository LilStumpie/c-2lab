#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//--------------------1 вариант---------------------------

int main(void){
    int a[20];
    srand(time(NULL));
    bool isgrow = true;

    for (int i = 0; i < 20; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 19; i++){
        if (a[i] > a[i+1]){
            isgrow = !isgrow;
            break;
        }
    }
    for (int i = 0; i < 20; i++){
        printf("%d"" ", a[i]);
    }
    printf("\n");
    if (isgrow){
        printf("Да");
    }else{
        printf("нет");
    }
    return 0;
}