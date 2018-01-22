#include<stdio.h>
#include<conio.h>
int main()
{
	int n,k,i,j,a[10],sum=0;
	printf("enter the size of an array: ");
	scanf("%d",n);
	printf("the limit upto which you want sum :");
	scanf("%d",&k);
	for(i=1;i<=n;i++)
	{
		scanf("%d",a[i]);
	}
	for(j=1;j<=k;j++)
	{
		sum=sum+a[j];
	}
	printf("the sums is: ");
	printf("%d",sum);
	return sum;
	getch();
}




