#include <stdio.h>
int main()
{
	int a[20],i,j,n,min,loc;
	printf("Enter the limit: ");
	scanf("%d",&n);
	printf("Enter the values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("sorted array:\t");
	for(i=0;i<n;i++)
	{
		min=a[i];
		loc=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				loc=j;
			}
		}
		a[loc]=a[i];
		a[i]=min;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
return 0;
}
