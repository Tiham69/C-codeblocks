#include <stdio.h>
void main() {
int num1, num2, value;
char sign;
scanf("%d",&num1);
scanf("%d",&num2);
value= num1+num2;
sign='+';
printf("%d%c%d=%d\n",num1,sign,num2,value);
value=num1-num2;
sign='-';
printf("%d%c%d=%d", num1,sign,num2,vue);
value=num1*num2;
sign='*';
printf("%d%c%d=%d", num1,sign,num2,value);
value=num1/num2;
sign='/';
printf("%d%c%d=%d", num1,sign,num2,value);
}
