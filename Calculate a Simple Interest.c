#include<stdio.h>
 int main ()
 {
int P,R,T,S;
printf("Enter the principal,rate and time : ");
scanf("%d",&P);
scanf("%d",&R);
scanf("%d",&T);
S=(P*R*T)/100;
printf("SIMPLE INTEREST IS : ");
printf("%d",S);
return 0;

 }