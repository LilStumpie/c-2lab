#include <stdio.h>
#include <math.h>

int main(void){
    float x, q;
    printf("enter x:");
    scanf("%f", &x);
    q = tan(x) - log(fabs(sin(x/12)) + exp(x-5));
    printf("%f", q);
    return 0;
}