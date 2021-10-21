#include <stdio.h>
#include<stdlib.h>
void  main()
{
int i,j,n,a[10],a1[10],temp;
printf("Enter the size of array : \n") ;  //Taking size of array
scanf("%d",&n);
printf("Enter the elements : \n") ;  //Taking input from user
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
a1[i]=a[i];
}
for(i=0;i<n;i++)  // loop for sorting array in ascending order
{
for(j=i+1;j<n;j++) 
{ 
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("Ascending order of an array : \n");  //print ascending order
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
for(i=0;i<n;i++) // loop for sorting array in descending order
{
for(j=i+1;j<n;j++)
{
if(a1[i]<a1[j])
{
temp=a1[i];
a1[i]=a1[j];
a1[j]=temp;
}
}
}
printf("\n Descending order of an array : \n");  // print descending order
for(i=0;i<n;i++)
{
printf("%d ",a1[i]);
}
}