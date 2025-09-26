#include <stdio.h>
#include <math.h>

int main(void){
    float x, q, res;
    printf("enter x:");
    scanf("%f", &x);
    q = tan(x) - log(fabs(sin(x/12)) + exp(x-5));
    res = (x > 0) ? (x + q): (x < 0) ? (x * q): (5 * x);
    printf("%f", res);
    return 0;
}