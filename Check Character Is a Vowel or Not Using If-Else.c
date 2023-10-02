#include <stdio.h>
 int main() {
 char ch =  'U';

 if (ch =='a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'I' || ch == 'i' || ch == 'o' || ch == '0' || ch == 'u' || ch == 'U' )

printf("The character %c is a vowel.\n", ch);
else {
printf("The character %c is a consonant.\n", ch);

 }
return 0;
 }