#include<stdio.h>
int main()
{
    float x[5], sum=0.0, avg;
    int i;
    float *px, *psum, *pavg;
    px = &x[0];  //  Or, px = &x;
    psum = &sum, pavg = &avg;
    printf("Enter any 5 array Elements: ");
    for (i=1;i<=5;i++)
    {
        scanf("%f",(px+i));
        *psum += *(px + i);
    }
    *pavg = *psum / 5;
    printf("Sum= %.2f \t Average= %.2f\n", *psum, *pavg);

    }

/* OUTPUT

Enter any 5 array Elements: 
1
2
3
4
5
Sum= 15.00 	 Average= 3.00 */