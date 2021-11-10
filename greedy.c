//Дано: монетки номиналом 25, 10, 5, 1 цент.
//Какое минимальное количество монеток нам нужно, чтобы дать сдачу?

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float f;
    do {
        f = get_float("Какая сдача?\n");
    } while (f <= 0);

    float getf = f;
    float x, y, z, d;
    int result = 0;

    for (x = 0.25; getf >= x;) {
        getf -= x;
        result += 1;
        printf("+ 1 монета по 0.25\n");
    }
    for (y = 0.10; getf >= y && getf < x;) {
        getf -= y;
        result += 1;
        printf("+ 1 монета по 0.10\n");
    }
    for (z = 0.05; getf >= z && getf < y;) {
        getf -= z;
        result += 1;
        printf("+ 1 монета по 0.05\n");
    }
    for (d = 0.01; getf >= 0.0099 && getf < 0.049;) {
        getf -= d;
        result += 1;
        printf("+ 1 монета по 0.01\n");
    }
    printf("Минимальное количество монет для сдачи: %i\n", result);
}
