#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char *uper(const char *s);

int main(void)
{
    char s[99], t[99];
    char b[99], a[99];

    scanf("%[^\n]s", s);

    for(int i = 0, n = strlen(s); i < n; i+=1)
    {
        t[i] = s[n-i-1];
    }

    t[strlen(s)] = '\0';


        if(strcmp(s , t) == 0)
        {
            printf("Palindrome == %s\n", t);
        }
        else
        {
            printf("Not a Palindrome == %s\n", t);
        }


        free(t);
}

char *uper(const char *s)
{
    int a = strlen(s);
    char *res = malloc(a+1);

    for(int i = 0; i < a; i++)
    {
        res[i] = toupper(s[i]);
    }


    res[a] = '\0';

    return res;
}
