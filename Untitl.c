#include<stdio.h>
main()
{
	int arr[5]={1,2,3,4,5};
	int *p=arr;
	int(*ptr)[5]=arr;
	printf("%u     %u",p,ptr);
	
}
