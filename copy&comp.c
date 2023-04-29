#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char *s = "hello";// can and should use a input method

    /*
    //start
    char *t = malloc(strlen(s)+1);

    // old string comparing
    /*for(i = 0, n = strlen(s)+1; i<n ; i++)
    {
        t[i] = s[i];
    }

    strcpy( t , s );


    t[0] = toupper(t[0]);

    printf("%s\n", s);
    printf("%s\n", t);

    free(t);
    //finish
    */

    //start
    char *t = malloc(strlen(s)+1); //this is a alternative code of the pervious code

    strcpy( t , s );

    if( t == NULL)
    {
        return 1;
    }

    if(strlen(t)>0)
    {
        t[0] = toupper(t[0]);
    }

    printf("%s\n", s);
    printf("%s\n", t);

    free(t);
    //finish

    return 0;
}
