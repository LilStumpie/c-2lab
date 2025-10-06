#include <stdio.h>
#include <math.h>

int main(void){
    int n;
    printf("enter 'n': ");
    scanf("%d", &n);
    float mina = sin(n + (1/n));
    for (int k = 2; k <= n; k++){
        float currentVal = pow(k, 3) * sin(n + (k/n));
        if (currentVal < mina){
            mina = currentVal;
        }
    }
    printf("minimum value is: %f", mina );
    return 0;
}