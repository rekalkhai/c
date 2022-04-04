#include <iostream>
#include <math.h>
using namespace std;
int snt(long long n)
{
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0 ;
	}
	return 1;
}
int main()
{
	int t,dem;
	long long b;
	cin>>t;
	while(t--)
	{
		dem=0;
		cin>>b;
		for(long long i=2;i<=sqrt(b);i++)
		{
			if(snt(i)==1&&i*i<=b) {
				dem++;
			}
			if(dem==3) cout<<i<<" ";
		}
		cout<<"\n";
		
	}
}
