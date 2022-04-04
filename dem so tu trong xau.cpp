#include<stdio.h>
#include<string.h>
int main(){
    int a;
    scanf("%d ",&a);
	while(a--)
	{
		int dem=1;
		char s[201];
		gets(s);
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]==' ' && s[i+1] !=' ' && s[i+1] !='\0' )
			{
				dem++;
			}
		}
		printf("%d\n",dem);
	}
}
