#include <iostream>
#include <math.h>
using namespace std;

int kt(int n)
{
	int sum=0;
	int s=0;
	int m=n;
	while(n!=0)
	{
		int s=s*10+n%10;
		sum+=n%10;
		n/=10;
	}
	if(sum%10==0&&m==s) return 1;
	else return 0;
}
int sn(long long n){
	long long x=1;
	for(int i=1;i<=n;i++) x=x*10;
	return x;
}
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		
		cin>>n;
		int dem=0;
		
		for(long long i=sn(n-1);i<sn(n);i++)

{
	if(kt(i)==1)
	{
		dem++;
	}
}
cout<<dem<<endl;
	}
}
