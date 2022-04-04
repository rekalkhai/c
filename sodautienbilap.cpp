#include<stdio.h>
int main(){
	int x;
	long long n,a[100001];
	scanf("%d",&x);
	while(x--)
	{
		scanf("%lld",&n);
		int dem=1;
		for(long long i=0;i<n;i++) scanf("%lld",&a[i]);
		for(long long i=0;i<n;i++)
		{
			for(long long j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					printf("%d ",a[i]);
					dem=0;
					break;
				}
			}
			if(dem==0) break;
		}
		if(dem==1) printf("NO");
		printf("\n");
	}
}
