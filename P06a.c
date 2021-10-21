#include <stdio.h>
#include<stdlib.h>
int main()
{
int array[10], search, c, i, n;
system("clear");
printf("Enter number of elements in array\n");
scanf("%d", &n);
printf("Enter %d integer(s)\n", n);
for (i = 0; i < n; i++)
scanf("%d", &array[i]);
printf("Enter a number to search and replace\n");
scanf("%d%d", &search, &c);
for (i= 0; i < n; i++)
{
if(array[i] == search)    /* If required element is found */
{
printf("%d is present at location %d.\n", search, i);
array[i]=c;
break;
}
}
if (c!= array[i])
printf("%d is not present in the array.\n", search);
else
printf("New List\n");
for(i=0;i<n;i++)
printf ("%d\t",array[i]);
}

/* OUTPUT
Enter number of elements in array
6
Enter 6 integer(s)
1 2 3 4 5 6 
Enter a number to search and replace
5 8
5 is present at location 5.
New List
1	2	3	4	8	6 */