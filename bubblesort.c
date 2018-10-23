#include<stdio.h>
void sort(int a[],int n);
void main()
{
	int a[20],i,n,val,flag,lb,ub,mid;
	printf("Enter the size of Array:");
	scanf("%d",&n);
	printf("Enter Values:\n");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,n);
	printf("Enter value to search:");
	scanf("%d",&val);
	lb=0,ub=n-1,flag=0;
	while(lb<=ub && flag==0)
	{
		mid=(lb+ub)/2;
		if(a[mid]==val)
		{
			printf("position is %d",mid+1);
			flag=1;
		}
		else
			if(val<a[mid])
				ub=mid-1;
			else
				lb=mid+1;
	}
	if(flag==0)
	printf("value not found");
}

sort(int a[],int n)
{
	int i,j,t;
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-i-2;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
