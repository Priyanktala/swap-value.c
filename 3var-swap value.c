#include<stdio.h>
main()
/*
	3var-swap value
*/

{
	int a,b,c;
	
	printf("Enter value of A=");
	scanf("%d",&a);
	
	printf("Enter value of B=");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("A=%d\n",a);
	printf("B=%d\n",b);
}