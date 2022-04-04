#include <stdio.h>
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
}
void max(int a[],int n)
{
	int b[101]={0};
	int j,m=0;
	for(int i=0;i<n;i++)
	{
		j=i+1;
		b[i]=1;
		while(a[j]>a[j-1]&&j<n)
		{
			b[i]++;
			j++;
		}
		
	}
	for(int i=0;i<n;i++)
	{
		if(b[i]>m)
		{
			m=b[i];
		}
	}
	printf("%d\n",m);
	for(int i=0;i<n;i++)
	{
		if(b[i]==m)
		{
			for(int j=i;j<i+m;j++)
			{
				printf("%d ",a[j]);
			}
			printf("\n");
		}
	}
}
int main()
{
	int a[101];
	int x,n;
	int k=1;
	scanf("%d",&x);
	while(x--)
	{
		scanf("%d",&n);
		nhap(a,n);
		printf("Test %d:\n",k);
		max(a,n);
		printf("\n");
		k++;
	}
}
