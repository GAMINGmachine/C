#include <stdio.h>
#include<stdlib.h>
int main()
{
int r, c, a[10][10], b[10][10], sum[10][10],i,j;
system("clear");
printf("Enter the number of rows and columns\n");
scanf("%d%d", &r,&c); 
printf("\nEnter elements of 1st matrix:\n");
for (i=0; i<r; ++i)
for (j=0; j<c; ++j) 
{       
scanf("%d",&a[i][j]);
}
printf("Enter elements of 2nd matrix:\n");
for (i=0; i<r; ++i)
for (j=0; j<c; ++j)
{
scanf("%d",&b[i][j]);
}
// adding two matrices
for (i=0; i<j; ++i)
for (j=0; j<c; ++j)
{
sum[i][j] = a[i][j] + b[i][j];
}
// printing the result
printf("\nSum of two matrices: \n");
for (i=0; i<r; ++i)
{
printf("\n");
for (j=0; j<c; ++j)
printf("%d\t",sum[i][j]);
} 
printf("\n");
}


/*OUTPUT
Enter the number of rows and columns
2 2
Enter elements of 1st matrix:
1 1
1 1
Enter elements of 2nd matrix:
2 2
2 2
Sum of two matrices: 
3	3	
3	3	*/