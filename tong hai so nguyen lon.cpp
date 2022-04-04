#include<stdio.h>
#include<string.h>
int main(){
	int x;
	scanf("%d ",&x);
	while(x--)
	{
		int n[600]={0},m[600]={0},c[600]={0};
		char a[600],b[600];
		gets(a);
		gets(b);
		int x=strlen(a),y=strlen(b);
		int max,sum,k=0,nho=0;
		if(x>=y) max=x;
		else max=y;
		int d=1,e=1;
		for(int i=max-1;i>=0;i--)
		{
			n[i]=a[x-d]-'0';
			d++;
			if(d>x) break;
		}
		for(int i=max-1;i>=0;i--)
		{
			m[i]=b[y-e]-'0';
			e++;
			if(e>y) break;
		}
		for(int i=max-1;i>=0;i--)
		{
			sum=n[i]+m[i]+nho;
			nho=0;
			if(sum<=9)
			{
				c[k]=sum;
				k++;
			}
			else
			{
				c[k]=sum%10;
				nho=1;
				k++;
			}
		}
		if(nho==1) printf("%d",nho);
		for(int i=k-1;i>=0;i--)
		{
			printf("%d",c[i]);
		}
		printf("\n");
	}
}
