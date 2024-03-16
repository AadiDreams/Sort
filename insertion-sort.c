#include <stdio.h>
int main()
{
	int a[20],i,j,n,key;
	printf("Enter the limit: ");
	scanf("%d",&n);
	printf("Enter the values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("sorted array:\t");
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
return 0;
}
