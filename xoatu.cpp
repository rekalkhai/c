#include <iostream>
#include <string.h>
#define max 100

using namespace std;

char s1[max];
char s2[max];
int a[max];
int i,j;
char xoaktu(char s1[],char s2[])
{
    for(int i=0;i<strlen(s1);i++)
    {
        if((s1[i]==s2[0])&&(s1[i+strlen(s2)-1]==s2[strlen(s2)-1]))
        {
            for(j=i;j<strlen (s1);j++)
            {
                s1[j]=s1[j+strlen(s2)];
            }
        }
    }
}
void xoakt(char s1[],int i)
{
    for(int j=i;j<strlen(s1);j++)
    {
        s1[j]=s1[j+1];
    }
}
int main()
{
    gets(s1);
    gets(s2);
    xoaktu(s1,s2);
    if(s1[0]==' ')
        xoakt(s1,0);
    for(i=0;i<strlen(s1);i++){
        if((s1[i]==' ')&&(s1[i+1]==' ')){
            xoakt(s1,i);
        }
    }
    cout<<s1;
}
