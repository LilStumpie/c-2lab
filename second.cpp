#include <stdio.h>
#include <math.h>

int main(void){
    int m, n;
    printf("enter numerator: ");
    scanf("%d", &m);
    printf("enter denumerator: ");
    scanf("%d", &n);
    /*for (int k = 2; k <= m; k++){
        if (n % k == 0 && m % k == 0){
            n = n / k;
            m = m / k;
        }
    }
    первое, что пришло в голову
    */
    //алгоритмом Евклида:
    int m2 = m;
    int n2 = n;
    while(m2 != 0){
        int t = m2;
        m2 = n2 % m2;
        n2 = t;
    }
    m = m / n2;
    n = n / n2;
    printf("result is: %d/%d", m, n);
    return 0;
}