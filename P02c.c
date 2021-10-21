#include<stdio.h>
int main()
{
 int marks;
 /*This Is a Grade Checker Program*/
 printf("\n=========================================");
 printf("\nThis Is a Grade Checker Program");
 printf("\n-----------------------------------");
 printf("\nEnter The Marks Between 0 To 100:");
 printf("\n=========================================\n");
 printf("\nEnter The Mark: ");
 scanf("%d", &marks);
 if(marks>100)
 {
 /* Marks greater than 100 */
 printf("\nDon't Be Smart Enter your Marks Between Limit\n");
  }
else
{
switch(marks/10)
 {
case 10 :
case 9 :
           /* Marks between 90-100 */
 printf("\n=============================");
 printf("\nYour Grade Is: A or Excellent");
 printf("\n=============================");
 break;
case 8 :
case 7 :
           /* Marks between 70-89 */
printf("\n=============================");
printf("\nYour Grade Is: B or Very Good" );
printf("\n=============================");
break;
case 6 :
           /* Marks between 60-69 */
printf("\n========================");
printf("\nYour Grade Is: C or Fair" );
printf("\n========================");
break;
case 5 :
case 4 :
           /* Marks between 40-59 */
printf("\n========================");
printf("\nYour Grade Is: D or Pass");
printf("\n========================");
break;
default :
          /* Marks less than 40 */
printf("\n===========================================");        
printf("\nYou Grade Is: F or Fail\n");
printf("\n===========================================\n");
   }
 }
   return 0;

}
