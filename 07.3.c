#include <stdio.h>
void main(){
int no1,no2,value;
char si;
scanf("%d", &no1);
scanf("%d", &no2);
si='+';
value=no1+no2;
printf("%d%c%d=%d\n", no1,si,no2,value);
value=no1-no2;
scanf("%c", &si);
printf("%d%c%d=%d\n", no1,si,no2,value);
value=no1*no2;
si=getchar();
printf("%d%c%d=%d\n", no1,si,no2,value);
si='/';
value=no1/no2;
printf("%d%c%d=%d", no1,si,no2,value);
}
