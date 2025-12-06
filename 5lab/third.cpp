#include <stdio.h>
#include <math.h>

typedef double (*func_ptr_t)(double);


double func1(double x) {
    return 1 / sqrt(5 - pow(x, 3));
}

double func2(double x) {
    return 1 / (3 * pow(x, 2) - 2 * x + 4);
}

int select_function() {
    int a;
    printf("Выберите функцию, которую надо посчитать: (1 или 2): ");
    scanf("%d", &a);
    return a;
}

double parabola(int n, func_ptr_t func) {
    double a, b, h, sum_odd = 0.0, sum_even = 0.0;

    if (func == func1) {
        a = -2;
        b = 1;
    } else if (func == func2) {
        a = -1;
        b = 3;
    } else {
        return 0;
    }

    h = (b - a) / n;

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        if (i % 2 == 0) {
            sum_even += func(x);
        } else {
            sum_odd += func(x);
        }
    }

    double integral = (h / 3) * (func(a) + 4 * sum_odd + 2 * sum_even + func(b));
    return integral;
}

int main() {
    int choice = select_function();
    func_ptr_t func;
    if (choice == 1) {
        func = func1;
    } else if (choice == 2) {
        func = func2;
    } else {
        printf("Некорректный выбор функции.\n");
        return 1;
    }

    int n = 10;

    double result = parabola(n, func);
    printf("Приблизительное значение интеграла: %.8f\n", result);

    return 0;
}