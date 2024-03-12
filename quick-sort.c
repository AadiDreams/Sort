#include <stdio.h>
int a[10],low,high,mid,i,n,j,pivot,temp;
void quick(int,int);
int partition(int,int);
void read()
{
	printf("Enter the limit: ");
	scanf("%d",&n);
	printf("Enter the values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quick(0,n-1);
}
void quick(int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=partition(low,high);
		quick(low,mid-1);
		quick(mid+1,high);
	}
}
int partition(int low,int high)
{
	i=low;
	j=high;
	pivot=a[low];
	while(i<=j)
	{
		while(a[i]<=pivot && i<n)
		{
			i++;
		}
		while(a[j]>pivot && j>=0)
		{
			j--;
		}
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		else
		{
			temp=a[j];
			a[j]=a[low];
			a[low]=temp;
		}
	}
	return j;
}
void display()
{
	printf("Sorted array:\t");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void main()
{
	read();
	display();
}
