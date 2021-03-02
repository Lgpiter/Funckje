#include <stdio.h>

double srednia_harmoniczna(double x, double y);//liczy srednia harmoniczna dwoch liczby

int main()
{
    printf("Srednia harmoniczna liczb 8 i 3 jest rowna %0.2f\n",srednia_harmoniczna(8,3));
}

double srednia_harmoniczna(double x, double y)
{
    double odwrotny1 = 1/x;
    double odwrotny2 = 1/y;
    
    double srednia = (odwrotny1 + odwrotny2)/2;
    
    return 1/srednia;
}
