#include <stdio.h>
 
int main()
{
     
    int a,b;
    int diff;
 
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
 
    // check condition to identify which is largest number
    if( a>b )
        diff=a-b;
    else
        diff=b-a;
 
    printf("\nDifference between %d and %d is = %d",a,b,diff);
    return 0;
}
