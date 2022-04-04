#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	int b[100];
	for(int i=0;i<30;i++) b[i]=1;
	gets(s);
	char a[100][100];
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]>64 && s[i]<91) s[i]=s[i]+32;
	}
	int n=0,m=0;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]!=' ')
		{
			a[n][m]=s[i];
			m++;
		}
		else
		{
			n++;
			m=0;
			while(s[i]==' ')
			{
				i++;
			}
			i--;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i][0]!='#')
		{
			for(int j=i+1;j<=n;j++)
		{
			if(strlen(a[i])==strlen(a[j]))
			{
				int flag=0;
				for(int y=0;y<strlen(a[i]);y++)
				{
					if(a[i][y]!=a[j][y])
					{
						flag=1;
					}
				}
				if(flag==0)
				{
					b[i]++;
					a[j][0]='#';
				}
			}
		}
		}
	}
	for(int i=0;i<=n;i++)
	{
		if(a[i][0]!='#')
		{
			for(int j=0;j<strlen(a[i]);j++)
			{
				printf("%c",a[i][j]);
			}
				printf(" %d\n",b[i]);
		}
	}
}
