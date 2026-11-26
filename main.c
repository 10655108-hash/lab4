#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <locale.h>

void task171() {
    int a, i=0;
    int h[15] = {195, 192, 190, 187, 185,
             183, 180, 178, 175, 173,
             170, 168, 165, 162, 160};
    printf("\nЗадание номер 171\n");
    printf("Список роста учеников:\n");

    for (int j = 0; j < 15; j++) {
        printf("%d ", h[j]);
    }
    printf("\nВведите рост ученика:");
    scanf("%d", &a);
    while (i < 15 && h[i] > a) {
        i++;
    }

    printf("\nМесто нового ученика: %d\n", i + 1);
}

void task178() {
    int a[18], i = 0;
    printf("\nЗадание номер 178\n");
    printf("Введите последовательность из 18 чисел:\n");
    for (int j = 0; j < 18; j++) {
        scanf("%d", &a[j]);
    }
    while (i < 18 && a[i] == a[0]) {
        i++;
    }
    printf("Количество равных элементов в начале: %d\n", i);
}

void task197() {
    int n = 1;
    double a, b;
    printf("\nЗадание номер 197\n");
    a = 1.0 / n;
    b = 1.0 / (n + 1);
    while (a - b >= 0.000001) {
        n++;
        a = 1.0 / n;
        b = 1.0 / (n + 1);
    }
    printf("Первый элемент: %.10f\n", a);
    printf("Второй элемент: %.10f\n", b);
    printf("Разность: %.10f\n", a - b);
    printf("Номера элементов: %d и %d\n", n, n + 1);
}

void task234() {
    int a, b, h;
    double F, x;
    printf("\nЗадание номер 234\n");
    printf("F(x) = sqrt(x) * cosx^2");
    printf("\nВведите на каком отрезке вычислять функцию:");
    scanf("%d %d", &a, &b);
    printf("\nВведите шаг функции:");
    scanf("%d", &h);
    for (x = a; x <= b; x += h) {
        F = sqrt(x) * pow(cos(x), 2);
        printf("%12.6f | %12.6f\n", x, F);
    }
}

void task15() {
    int i;
    printf("\nЗадание номер 15\n");
    for (i = 1; i <= 10; i++) {
        printf("%d\n", 7 * i);
    }
}

void task106() {
    int a, max= 0, i = 0, pos = 0;
    printf("\nЗадание номер 106\n");
    printf("Введите последовательность чисел (0 - конец):\n");
    scanf("%d", &a);
    while (a != 0) {
        i++;
        if (a > max) {
            max = a;
            pos = i;
        }
        scanf("%d", &a);
    }

    printf("Наибольший элемент: %d\n", max);
    printf("Порядковый номер: %d\n", pos);
}

void task233() {
    int a, b, h;
    double F, x;
    printf("\nЗадание номер 233\n");
    printf("F(x) = 2sinx^2 + 1");
    printf("\nВведите на каком отрезке вычислять функцию:");
    scanf("%d %d", &a, &b);
    printf("\nВведите шаг функции:");
    scanf("%d", &h);
    for (x = a; x <= b; x += h) {
        F = 2 * pow(sin(x), 2) + 1;
        printf("%12.6f | %12.6f\n", x, F);
    }
}

void task122() {
    int sum, num;
    double res, max;
    printf("\nЗадание номер 122\n");
    for (int i = 100; i <= 999; i++) {
        sum = i / 100 + (i / 10) % 10 + i % 10;

        res = (double)i / sum;

        if (res > max) {
            max = res;
            num = i;
        }
    }
    printf("Число: %d\n", num);
    printf("Наибольшее отношение: %.6f\n", max);
}

void task59() {
    int a, i, x = 2;
    double res = 1;
    printf("\nЗадание номер 59\n");
    for (i = 1, a = 3; i <= 10; i++, a++) {
        if (i % 2 == 0) {
            res = res + (i +1 / a) * pow(x, i);
        } else {
            res = res - (i + 1 / a) * pow(x, i);
        }
    }
    printf("%d", res);
}

void task50() {
    int a, n, b, A, N, B, C;
    printf("\nЗадание номер 59\n");
    printf("\nВведите a( 0 ≤ a ≤ 50):");
    scanf("%d", &a);
    printf("\nВведите n( 1 ≤ n ≤ 100):");
    scanf("%d", &n);
    printf("\nВведите b(b ≥ а):");
    scanf("%d", &b);
    for (int i = 20; i <= 40; i++) {
        C = C + pow(i, 3);
    }
    for (int i = a; i <= 50; i++) {
        A = A + pow(i, 3);
    }
    for (int i = 1; i <= n; i++) {
        N = N + pow(i, 3);
    }
    for (int i = a; i <= b; i++) {
        B = B + pow(i, 3);
    }
    printf("сумму кубов всех целых чисел от 20 до 40: %d \n", C);
    printf("сумму кубов всех целых чисел от а до 50: %d \n", A);
    printf("сумму кубов всех целых чисел от 1 до n: %d \n", N);
    printf("сумму кубов всех целых чисел от а до b: %d \n", B);
}





int main(void)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int tasknum;
    do {
        printf("\nВведите порядковый номер задания: ");
        scanf("%d", &tasknum);

        switch (tasknum) {
            case 1:
                task171();
                break;

            case 2:
                task178();
                break;

            case 3:
                task197();
                break;

            case 4:
                task234();
                break;

            case 5:
                task15();
                break;

            case 6:
                task106();
                break;

            case 7:
                task233();
                break;

            case 8:
                task122();
                break;

            case 9:
                task59();
                break;

            case 10:
                task50();
                break;

            case 0:
                printf("Выход\n");
                break;

            default:
                printf("Неверный выбор!\n");
        }

    } while (tasknum != 0);

    return 0;
}