#include<stdio.h>
#include<string.h>
int main(){
	int b[100]={0},c[100]={0};
	char a[100][100];
	char s[100];
	gets(s);
	int x=strlen(s);
	int n=0,m=0;
	for(int i=0;i<x;i++)
	{
		if(s[i]==' ')
		{
			n++;
			m=0;
		}
		else
		{
			a[n][m]=s[i];
			m++;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(strlen(a[i])==strlen(a[j]))
			{
				for(int y=0;y<strlen(a[i]);y++)
				{
					if(a[i][y]==a[j][y])
					{
						b[j]++;
					}
				}
				if(b[j]==strlen(a[j])) a[j][0]='#';
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
			printf(" ");
		}
	}
}
