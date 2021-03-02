#include <stdio.h>

void rzad_zn(char c, int i, int j);//wyswietla znak c w kolumnach od i do j

int main()
{
    rzad_zn('$',3,5);
}

void rzad_zn(char c, int i, int j)
{
    for (int k = 0; k < i - 1; k++)
    {
        printf(" ");
    }
    for (int l = i; l <= j; l++)
    {
        putchar(c);
    }
    putchar('\n');
}
