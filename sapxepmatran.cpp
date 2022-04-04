#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int k=1;
	while(t--)
	{
		int n[100][100];
		int a,b;
		scanf("%d%d",&a,&b);
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				scanf("%d",&n[i][j]);
			}
		}
		printf("Test %d:\n",k);
		k++;
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				for(int x=i;x<a;x++)
				{
					for(int y=j;y<b;y++)
					{
						if(n[i][j]>n[x][y])
						{
							int swap=n[i][j];
							n[i][j]=n[x][y];
							n[x][y]=swap;
						}
					}
				}
			}
		}
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				printf("%d ",n[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
