#include<stdio.h>
#include<stdlib.h>

int main() 
{ 
int n1, n2,res,ch; 
system("clear");
 
printf("Enter the  number 1 and number2: ") ; 
scanf("%d%d",&n1,&n2) ; 
 
printf("\n\n Enter your choice <1...4> : ") ; 
scanf(" %c", &ch) ; 
switch(ch) 
{ 
case 1: res=n1+n2; 
       printf("\n Addition of two numbers= %d", res) ; 
       break ; 
case 2: res=n1-n2; 
       printf("\n Subtraction of two numbers= %d", res) ; 
       break ; 
case 3: res=n1*n2; 
       printf("\n Multiplication of two numbers= %d", res);
       break ; 
case 4: res=n1/n2;
       printf("\n Division of two numbers= %d", res); 
       break;    
default: printf("\n Invalid choice"); 
   	break ; 
} 
}

/*Output
Enter the  number 1 and number2: 3 4
Enter your choice <1...4> : 1
Addition of two numbers= 7
Enter the  number 1 and number2: 8
4
Enter your choice <1...4> : 6
Invalid choice  */