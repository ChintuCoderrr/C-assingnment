#include <stdio.h>
int main ()
{
char operation;
long n1,n2;
printf("enter an operator(+,-,*,/):");
scanf("%c",&operation);
printf ("enter two operands:");
scanf("%lf%lf",&n1,&n2);
switch( operation)
{
    case '+':
    printf("%.llf+%.llf=%.llf",n1,n2,n1+n2);
    break ;

    case'-':
    printf("%.llf-%.llf=%.llf",n1,n2,n2-n2);
    break;
    
    case'*':
    printf("%.llf*%.llf=%.llf",n1,n2,n1*n2);
    break ;

    case'/' :
    printf("%.llf/%.llf=%.llf",n1,n2,n1/n2);
    break ;

    case'%' :
    printf("%.llf%%.llf=%.llf",n1,n2,n1%n2);
    break ;

    //operator does not match any constant +,-,*,/
    default:
    printf("Error! Operator is not correct");
}
return 0;

}
  