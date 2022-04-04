#include <iostream>
using namespace std;
int a[100][100],n,i,j,gt,d,hang,cot;
void tao(int n)
{
    d=0;gt=1;hang=n-1;cot=n-1;
    while(d<=n/2)
    {
        for( i=d;i<=cot;i++) a[d][i]=gt++;
        for( i=d+1;i<=hang;i++) a[i][cot]=gt++;
        for(i=cot-1;i>=d;i--) a[hang][i]=gt++;
        for( i=hang-1;i>d;i--) a[i][d]=gt++;
        d++;
        hang--;
        cot--; 
    }
}
void inkq(int n)
{
    for(int i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
            
        }
        cout<<"\n";
    }
}
int main()
{
    int n;
    cin>>n;
    tao(n);
    inkq(n);
}
