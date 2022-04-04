#include <stdio.h>
#include <string.h>
int main(){
	char s[100];
	gets(s);
	int i;
	for(;s[i];i++){
		if(s[i]>='a'&&s[i]<='z'){
			s[i] -=32;
		}
	}
	printf("%s",s);
	return 0;
}
