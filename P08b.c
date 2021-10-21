#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main()
{
char s[20];
int count=0,i;
system("clear");
printf("Enter the string:\n");
scanf("%[^\n]s", s);
for (i = 0;s[i] != '\0';i++)
{
if(s[i] == ' ' && s[i+1] != ' ')
count++;    
}
printf("Number of words in given line are: %d\n", count + 1);
}

/* OUTPUT
Enter the string:
welcome to pda cse
Number of words in given line are: 4 */