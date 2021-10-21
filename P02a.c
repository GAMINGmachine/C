#include <stdio.h>
#include <stdlib.h>
int main()
{
int dayno;
system("clear");
printf("Input Day No : ");
scanf("%d",&dayno);
switch(dayno)
{
case 1: printf("Monday \n");
break;
case 2: printf("Tuesday \n");
break;
case 3: printf("Wednesday \n");
break;
case 4: printf("Thursday \n");
break;
case 5: printf("Friday \n");
break;
case 6: printf("Saturday \n");
break;
case 7: printf("Sunday  \n");
break;
default: printf("Invalid day number. \nPlease try again ....\n");
break;
}
}

/*OUTPUT

Input Day No : 5
Friday 

Input Day No : 8
Invalid day number. 
Please try again ....*/
