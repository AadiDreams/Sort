#include <stdio.h>
int main()
{
	int a[20],n,i,j,t;
	printf("Enter the limit: ");
	scanf("%d",&n);
	printf("Enter the values: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Given Array: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("\nSorted Array: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
return 0;
}
