#include <stdio.h>
#include <string.h>
int main()
{
char s[100];
int i;
printf("\nEnter a string : ");
scanf("%s",s); 
for (i = 0; s[i]!='\0'; i++) 
{
if(s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
}
printf("\nString in Upper Case = %s\n", s);
}


/* OUTPUT
Enter a string : welcome
String in Upper Case = WELCOME */