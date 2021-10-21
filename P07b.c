#include <stdio.h>
#include <math.h>
int main ()
{
static int array[10][10];
int i, j, m, n, sum = 0, sum1 = 0, a = 0, norm;
printf("Enter the order of the matrix\n");
scanf("%d%d", &m, &n);
printf("Enter the elements of the matrix \n");
for (i = 0; i < m; ++i) 
{
for (j = 0; j < n; ++j)
{
scanf("%d", &array[i][j]);
a = array[i][j] * array[i][j];
sum1 = sum1 + a;
}
} 
norm = sqrt(sum1);
printf("The norm of the given matrix is = %d\n", norm);
for (i = 0; i < m; ++i) 
{
sum = sum + array[i][i];
}
printf("Trace of the matrix is = %d\n", sum);
}

/* OUTPUT
Enter the order of the matrix
2 2
Enter the elements of the matrix 
1 2 
3 4
The norm of the given matrix is = 5
Trace of the matrix is = 5 */