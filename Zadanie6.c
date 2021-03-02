#include <stdio.h>

double potega(double a, int b);//funkcja podnosi liczbe a do potegi b

int main()
{
    potega(-2,0);
}

double potega(double a, int b)
{
    if (b == 0)
    {
        printf("WYNIK: 1\n");
        return 1;
    }
    
    double pot;
    
    if ( a != 0)
    {
        pot = 1;
    }
    else
    {
        printf("WYNIK: 0\n");
        return 0;
    }
   
    
    for (int i = 1; i <= b; i++)
        pot *= a;
    printf("WYNIK %f\n",pot);
    return pot;
}
