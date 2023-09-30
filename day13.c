#include <stdio.h>
int main()
{
    const int PI=3.14 ;
    int radius,circumference;
    printf("enter the radius\n");
    scanf("%d",&radius);
    circumference=2*PI*radius;
    printf("you have enter circumference as %d\n",circumference);
     
    return 0;
}
