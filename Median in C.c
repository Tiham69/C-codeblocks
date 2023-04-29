#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){

    int a = pow(10,6);
    char s[a];
    scanf("%[^\n]", &s);

    printf("%s", strrev(s));

return 0;
}
