#include <iostream>
#include <math.h>
using namespace std;
int sotrungnhau(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(int k=j+1;k<n;k++)
				{
					a[k-1]=a[k];
				}
				n--;
				i--;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int n,a[1000];
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	sotrungnhau(a,n);
	return 0;
}
