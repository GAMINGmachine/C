#include <stdio.h>
#include<stdlib.h>
int main()
{
int num, i = 1;
system("clear");
printf("\n Enter any Number:");
scanf("%d", &num);
printf("Multiplication table of %d: \n", num);
do
{
printf("\n %d x %d = %d", num, i, num * i);
i++;
}while (i <= 10);
}

/* OUTPUT
Enter any Number:5
Multiplication table of 5: 

 5 x 1 = 5
 5 x 2 = 10
 5 x 3 = 15
 5 x 4 = 20
 5 x 5 = 25
 5 x 6 = 30
 5 x 7 = 35
 5 x 8 = 40
 5 x 9 = 45
 5 x 10 = 50 */