#include <stdio.h>

double min(double x,double y);//funkcja zwraca mniejsza z dwoch wartosci

int main()
{
    printf("Mniejsza z liczb 12.5 i 10.6666 to %0.4f\n",min(12.5,10.6666));
}

double min(double x, double y)
{
    if(y > x)
        return x;
    else 
        return y;
}
