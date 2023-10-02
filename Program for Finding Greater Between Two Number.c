#include <stdio.h>
 int main(){
 int num1,num2;
  printf("enter two numbers : ");
  scanf("%d", &num1);
  scanf("%d", &num2);
if (num1 == num2)
printf ("both are equal"); else if(num1 > num2)
printf(" num1 is greater"); else
printf(" num2 is greater");
return 0;
}