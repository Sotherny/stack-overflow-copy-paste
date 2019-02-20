#include<stdio.h>
main()
{
	//18.01.2019
	int i,n,fac=1;
	printf("Enter the value for n to do the factorial = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	printf("the product of factorial for the number that you enter : %d",fac);
}
