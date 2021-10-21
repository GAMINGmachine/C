#include<stdio.h>
#include<stdlib.h>

int main()
{
int num,rev=0,temp,digit;
system("clear");

printf("Enter the number\n");
scanf("%d",&num);
temp=num;

while(num > 0)
{
digit = num % 10;
rev = rev * 10 + digit;
num=num/10;
}

printf("\n Given number is =%d ",temp);
printf("\n Reverse number is =%d",rev);

if(temp == rev)
printf("\n Number is palindrome\n");
else
printf("\n Number is not palindrome\n");
}


/*Output
Enter the number
232

 Given number is =232 
 Reverse number is =232
 Number is palindrome 

Enter the number
6767

 Given number is =6767 
 Reverse number is =7676
 Number is not palindrome */
