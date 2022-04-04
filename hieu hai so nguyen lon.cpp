#include "stdio.h"
#include "string.h"
void daonguoc(char s[]){
    char s1[1000];int i,j=0,n=strlen(s);
	for(i=n-1;i>=0;i--) s1[j++]=s[i];
	s1[n]='\0';
	strcpy(s,s1);
}
void tru(char a[],char b[]){
	int i,n=strlen(a),m=strlen(b);
	daonguoc(a);daonguoc(b);
	for(i=0;i<n-m;i++) strcat(b,"0");
	char luu[1000],c;
	for(i=0;i<n;i++){
		int r,k=a[i]-'0',h=b[i]-'0';
		if(i==0){
			if(k>=h){
				r=k-h;
				luu[i]='0'+r;c=0;
			}else{
				r=k-h+10;
				luu[i]='0'+r;c=1;
			}
		}else{
			if(k<h&&c==0){
				r=k+10-h;
				luu[i]='0'+r;c=1;
			}else if(k<h&&c==1){
				r=k+10-h-c;
				luu[i]='0'+r;c=1;
			}else if(k==h&&c==0){
				r=k-h;
				luu[i]='0'+r;c=0;
			}else if(k==h&&c==1){
				r=k+10-h-c;
				luu[i]='0'+r;c=1;
			}else if(k>h&&c==0){
				r=k-h;
				luu[i]='0'+r;c=0;
			}else if(k>h&&c==1){
				r=k-h-c;
				luu[i]='0'+r;c=0;
			}
		}luu[n]='\0';
	}
	daonguoc(luu);int dem=0;	
	for(int i=0;i<n;i++){
		if(luu[i]!='0'){
			printf("%c",luu[i]);dem=1;
		}else if(luu[i]=='0'&&dem==1){
			printf("%c",luu[i]);
		} 
	}if(dem==0) printf("0");
	printf("\n"); 
} 
main(){
	int i;scanf("%d",&i);
	while(i--){
		char a[1000],b[1000];
		scanf("%s %s",&a,&b);
		if(strlen(a)>strlen(b))  tru(a,b);
		else if(strlen(a)==strlen(b))
			 if(strcmp(a,b)<0) tru(b,a);
			 else                tru(a,b);
		else                     tru(b,a);	
	}
}
