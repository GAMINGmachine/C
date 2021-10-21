#include<stdio.h>
#include<math.h>

int main()
{
int i, n;
float x, sum, t;
system("clear");

printf(" Enter the value for x : ");
scanf("%f",&x);
    
printf(" Enter the value for n : ");
scanf("%d",&n);
    
x=x*3.14159/180;
t=x;
sum=x;
    

/* Loop to calculate the value of Sine */
for(i=1;i<=n;i++)
{
t=(t*(-1)*x*x)/(2*i*(2*i+1));
sum=sum+t;
} 
printf(" The value of Sin(%f) = %.4f",x,sum);
}


/*OUTPUT

Enter the value for x : 90
Enter the value for n : 5
The value of Sin(1.570795) = 1.0000*/