#include <stdio.h>
struct student
{
char name[50];
int roll;
float marks;
}s[10];
int main()
{
int i, search;
printf("Enter information of students:\n");
// storing information
for(i=0; i<5; ++i)
{
s[i].roll = i+1;
printf("\nFor roll number%d,\n",s[i].roll);
printf("Entername: ");
scanf("%s",s[i].name);
printf("Enter marks: ");
scanf("%f",&s[i].marks);
printf("\n");
}
printf("Enter Roll No. to be searched\n");
scanf("%d",&search);
printf("Displaying Information:\n\n");
    // displaying information
for(i=0; i<10; ++i)
{
if(search==s[i].roll)
{
printf("\nRoll number: %d\n",i+1);
printf("Name: ");
puts(s[i].name);
printf("Marks: %.1f",s[i].marks);
printf("\n");
}
}
}

/*OUT PUT
Enter information of students:
For roll number1,
Entername: xyz
Enter marks: 45
For roll number2,
Entername: abc
Enter marks: 65
For roll number3,
Entername: str
Enter marks: 85
For roll number4,
Entername: jkl
Enter marks: 55
For roll number5,
Entername: trt
Enter marks: 55
Enter Roll No. to be searched
5
Displaying Information:
Roll number: 5
Name: trt
Marks: 55.0   */