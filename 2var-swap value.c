#include<stdio.h>
main()
/*
	2-var-swap value
*/

{
	int a,b;
	
	printf("Enter value of A=");
	scanf("%d",&a);
	
	printf("Enter value of B=");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("A=%d\n",a);
	printf("B=%d\n",b);
}