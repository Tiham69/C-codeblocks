#include <stdio.h>
void main()
{
char a;
scanf("%c", &a);

if(a>='A' && a<='Z' || a>='a' && a<='z')
    {
    printf("It's an Alphabet\n");
    if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
        {
        printf("It's an alphabet and also consonant");
        }
    }
}
