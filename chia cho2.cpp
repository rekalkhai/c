#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,k,s;
	int x=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		s=i;
		if(s%2==0)
		{
			while(s%2==0)
			{
				x++;
				s/=2;
			}
		}
	}
	if(x>=k) cout <<"yes";
	 else cout <<"no";
}
