#include <stdio.h>
#include <string.h>
int main(){
	char s[200];
	int i,chu=0,so=0,ktu=0;
	gets(s);
	for(i=0;i<strlen(s);i++){
		if((s[i]<=90&&s[i]>=65 )||(s[i]<=122&&s[i]>=97)){
			chu++;
		}
		else {
		if(s[i]<=57 && s[i]>=48){
			so++;
		}
		else {
			ktu++;
		}}
	}
	printf("%d %d %d",chu,so,ktu);
	return 0;
}
