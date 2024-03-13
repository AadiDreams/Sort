#include <stdio.h>
int a[10],b[10],n,l,h,i,j,k;
void divide(int,int);
void merge(int,int,int);
void read()
{
	printf("Enter the limit: ");
	scanf("%d",&n);
	printf("Enter the values: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	divide(0,n-1);
}
void divide(int l,int h)
{
	int m;
	if(l<h)
	{
		m=(l+h)/2;
		divide(l,m);
		divide(m+1,h);
		merge(l,m,h);
	}
}
void merge(int l,int m,int h)
{
	i=l;
	j=m+1;
	k=l;
	while((i<=m) && (j<=h))
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
			k++;
		}
		else
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	while(i<=m)
	{
		b[k++]=a[i++];
	}
	while(j<=h)
	{
		b[k++]=a[j++];
	}
	for(i=l;i<=h;i++)
	{
		a[i]=b[i];
	}
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
