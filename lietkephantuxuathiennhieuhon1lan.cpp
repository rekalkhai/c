#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a[100],kt[100];
	int n,dem;
	dem=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		kt[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j]&&kt[i]!=2)
			{
				kt[i]=1;
				kt[j]=2;
			}
		}
		if(kt[i]==1)
		{
			dem++;
		}
	}
	cout<<dem<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j]&&kt[i]!=2)
			{
				kt[i]=1;
				kt[j]=2;
			}
		}
		if(kt[i]==1)
		{
			cout<<a[i]<<" "<<endl;
		}
	}
}
