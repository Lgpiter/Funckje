#include <stdio.h>

double potega(double a, int b);//funkcja podnosci liczbe a do potegi calkowitej b rekurencyjnie

int main()
{
    printf("%f\n", potega(2,4));
}

double potega(double a, int b)
{
    if (b == 0)
        return 1;
    else
        return a * potega(a, b - 1);
}
