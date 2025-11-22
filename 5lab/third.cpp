#include <stdio.h>
#include <math.h>

int select_function() {
    int a;
    printf("Выберите функцию, которую надо посчитать: (1 или 2): ");
    scanf("%d", &a);
    return a;
}

double func(double x, int choice) {
    if (choice == 1) {
        return 1 / sqrt(5 - pow(x, 3));
    } else if (choice == 2) {
        return 1 / (3 * pow(x, 2) - 2 * x + 4);
    } else {
        return 0;
    }
}

double parabola(int n, int choice) {
    double a;
    double b;
    if(choice == 1){
       a = -2;
       b = 1;
    };
    if(choice == 2){
       a = -1;
       b = 3;
    };
    double h = (b - a) / n;
    double sum_odd = 0.0, sum_even = 0.0;

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        if (i % 2 == 0) {
            sum_even += func(x, choice);
        } else {
            sum_odd += func(x, choice);
        }
    }

    double integral = (h/3) * (func(a, choice) + 4 * sum_odd + 2 * sum_even + func(b, choice));
    return integral;
}

int main() {
    int choice = select_function();
    int n = 10;

    double result = parabola(n, choice);
    printf("Приблизительный значение интеграла: %.8f\n", result);

    return 0;
}