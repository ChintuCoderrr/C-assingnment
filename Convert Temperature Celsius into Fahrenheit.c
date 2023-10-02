#include <stdio.h>
 int main(){
 float t,f;
 printf("Enter temperature in celsius : ");
 scanf("%f",&t);
 f=(1.8*t)+32;
 printf("Temperture in fahrenheit is : ");
 printf("%f",f);
return 0;
 }