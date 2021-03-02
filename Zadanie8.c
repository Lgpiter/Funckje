#include <stdio.h>

void do_systemu(int n, int m);//zamiana liczby n na jakis system (m) 

int main()
{
    printf("35 w systemie binarnym to: ");
    do_systemu(35,2);
    putchar('\n');
}

void do_systemu(int n, int m)
{
    int r;
    
    r = n % m;
    if (n >= m)
        do_systemu(n/m, m);
    putchar('0' + r);
    return;
}
