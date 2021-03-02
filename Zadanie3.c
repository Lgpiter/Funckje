#include <stdio.h>

void wypisywanie(char znak, int x, int y);//wypisuje x znakow w wierszu, a ilosc wierszy jest rowna y

int main()
{
    wypisywanie('$', 10, 5);   
}

void wypisywanie(char znak, int x, int y)
{
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            putchar(znak);
        }
        putchar('\n');
    }
}
