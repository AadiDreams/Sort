#include<stdio.h>
void main()
{
    int i,j,t=0,s,a[5];
    printf("enter:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<5;j++)
    {
        for(i=0;i<5;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("\t%d",a[i]);
    }
}
