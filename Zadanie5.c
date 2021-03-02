#include <stdio.h>
#include <ctype.h>

int ktora_w_alfabecie(char x);// funckja sprawdza ktora jest litera w alfabecie, jesli wczytany znak nie jest litera to zwraca -1
int main()
{
    char pom;
    while((pom=getchar()) != '#')//program konczy dzialanie w momencie wpisania przez uzytkownika #
    {
        putchar(pom);
        ktora_w_alfabecie(pom);
    }
    return 0;
}

int ktora_w_alfabecie(char x)
{
    if (isalpha(x))
    {
        x = toupper(x);
        printf("-> %d",x - 64);
    }
    else 
        return -1;
}
