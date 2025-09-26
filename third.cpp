#include <stdio.h>
#include <math.h>

int main(void){
    float x, q, res;
    printf("enter x:");
    scanf("%f", &x);
    q = tan(x) - log(fabs(sin(x/12)) + exp(x-5));
    if (x > 0 && q > 0){
        printf("%s", "1-я четверть");
    }else if (x > 0 && q < 0){
        printf("%s", "4-я четверть");
    }else if (x < 0 && q > 0){
        printf("%s", "2-я четверть");
    }else if (x < 0 && q < 0){
        printf("%s", "3-я четверть");
    };
}