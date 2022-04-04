#include<stdio.h>
int main()
{
	int n,a[50005],b[50005],len=0,xuong=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		len+=a[i];
		xuong+=b[i];
	}
	if(len>xuong)
	{
		int min=b[0];
		for(int i=0;i<n;i++)
		{
			if(b[i]<min) min=b[i];
		}
		printf("%d",min+len);
	}
	else
	{
		int nho=a[0];
		for(int i=0;i<n;i++)
		{
			if(a[i]<nho) nho=a[i];
		}
		printf("%d",nho+xuong);
	}
}
