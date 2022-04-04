#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	scanf("%d",&x);
	while(x--)
	{
		int n;
		scanf("%d",&n);
		long long a[100005];
		for(int i=0;i<n;i++) scanf("%lld",&a[i]);
		long long min=abs(a[0]-a[n-1]);
		int d=1;
		for(int i=0;i<n-1;i++)
		{
			if(min>abs(a[i]-a[i+1]))
			{
				min=abs(a[i]-a[i+1]);
				d=1;
			}
			else
			{
					if(min==abs(a[i]-a[i+1]))
			{
				d++;
			}
			}
		}
		printf("%lld %d\n",min,d);
	}
}
