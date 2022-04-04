#include <iostream>
#include <stdio.h>
using namespace std;
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
	cout<<s;
	return 0;
}
