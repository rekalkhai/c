#include <iostream>
using namespace std;
int main()
{
    int x,n,dem,a[20];
    a[1]=1;
    a[2]=2;
    a[3]=5;
    a[4]=10;
    a[5]=20;
    a[6]=50;
    a[7]=100;
    a[8]=200;
    a[9]=500;
    a[10]=1000;
    cin>>x;
    while(x--)
    {
        dem=0;
        cin>>n;
        for(int i=10;i>0;i--)
        {
            if(n>=a[i])
            {
                while(n>=a[i])
                {
                    n-=a[i];
                    dem++;
                }
            }
            if(n==0) break;
        }
        cout<<dem<<endl;
    }
}
