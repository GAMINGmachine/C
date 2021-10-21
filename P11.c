#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
FILE *fptr;
char Author[100] ,Title[100];
int pages,i;
float price;
/*  open for writing */
fptr = fopen("bk.rec", "w");
if(fptr == NULL)
{
printf("File does not exists \n");
}
for(i=0;i<3;i++)
{
printf("Enter the Title of the book %d\n",i+1);
scanf("%s", Title);
fprintf(fptr, "Title    = %s\n", Title);
printf("Enter the Author name \n");
scanf("%s", Author);
fprintf(fptr, "Author Name    = %s\n", Author);
printf("Enter the pages\n");
scanf("%d", &pages);
fprintf(fptr, "Pages    = %d\n", pages);
printf("Enter the Price\n");
scanf("%f", &price);
fprintf(fptr, "Price = %.2f\n", price);
}
 fclose(fptr);
}