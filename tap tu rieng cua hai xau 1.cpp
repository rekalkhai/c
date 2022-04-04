#include <stdio.h>
#include <string.h>
int main(){
	char s1[105],s2[105];
	char a[105][105],b[105][105];
	gets(s1);
	gets(s2);
	int n=0,m=0;
	for(int i=0;i<strlen(s1);i++)
	{
		if(s1[i]==' ')
		{
			n++;
			m=0;
			while(s1[i]==' ')
			{
				i++;
			}
			i--;
		}
		else {
			a[n][m]=s1[i];
			m++;
		}
	}
	for(int i=0;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(strcmp(a[i],a[j])>0)
			{
				char swap[105];
				strcpy(swap,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],swap);
			}
		}
	}
	int h=0,k=0;
	for(int i=0;i<strlen(s2);i++)
	{
		if(s2[i]==' ')
		{
			h++;
			k=0;
			while(s2[i]==' ')
			{
				i++;
			}
			i--;
		}
		else
		{
			b[h][k]=s2[i];
			k++;
		}
	}
	for(int i=0;i<=h;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(strlen(b[i])==strlen(a[j]))
			{
				int flag=0;
				for(int s=0;s<strlen(a[j]);s++)
				{
					if(a[j][s]!=b[i][s])
					{
						flag=1;
					}
				}
				if(flag==0) a[j][0]='#';
			}
		}
	}
	for(int i=0;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(strlen(a[i])==strlen(a[j]))
			{
				int nho=0;
				for(int s=0;s<strlen(a[i]);s++)
				{
					if(a[i][s]!=a[j][s])
					{
						nho=1;
					}
				}
				if(nho==0) a[j][0]='#';
			}
		}
	}
	for(int i=0;i<=n;i++)
	{
		if(a[i][0]!='#') printf("%s ",a[i]);
	}
}
