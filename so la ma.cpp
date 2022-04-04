#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("\n");
		char s[100];
		gets(s);
		int lama[100],sum=0;
		int length=strlen(s);
		for(int i=0;i<length;i++){
			switch(s[i]){
				case 'I':
					lama[i]=1;
					break;
				case 'V':
					lama[i]=5;
					break;
				case 'X':
					lama[i]=10;
					break;
				case 'L':
					lama[i]=50;
					break;
				case 'C':
					lama[i]=100;
					break;
				case 'D':
					lama[i]=500;
					break;
				case 'M':
					lama[i]=1000;
					break;
			}
		}
		for(int i=0;i<length-1;i++){
			if(lama[i]<lama[i+1]) sum-=lama[i];
			else sum+=lama[i]; 
		}
		sum+=lama[length-1];
		printf("%d\n",sum);
	}
	return 0;
}
