#include <stdio.h>
#include <math.h>
#define MAXSIZE 10
void main()
{
float x[MAXSIZE];
int  i, n;
float average, variance, std_deviation ,sum = 0, sum1 = 0;
printf("Enter the value of N \n");
scanf("%d", &n);
printf("Enter %d real numbers \n", n);
for (i = 0; i < n; i++)
{
scanf("%f", &x[i]);
}
/*  Compute the sum of all elements */
for (i=0; i<n; i++)
{
sum = sum + x[i];
}
average = sum / (float)n;
/*Compute  variance  and standard deviation  nm*/
for (i=0; i<n; i++)
{
sum1 = sum1 + pow((x[i] - average), 2);
}
variance = sum1 / (float)n;
std_deviation = sqrt(variance);
printf("Sum of all elements=%.2f\n", sum);
printf("Average of all elements = %.2f\n", average);
printf("variance of all elements = %.2f\n", variance);
printf("Standard deviation = %.2f\n", std_deviation);
}

/* OUTPUT
Enter the value of N 
5
Enter 5 real numbers 
1 2 3 4 5
Sum of all elements=15.00
Average of all elements = 3.00
variance of all elements = 2.00
Standard deviation = 1.41 */