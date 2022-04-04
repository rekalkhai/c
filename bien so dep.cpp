#include<stdio.h>
#include<string.h> 
#include<math.h>
int dieukien23(int n){
  if(n%11111==0 ||((n/100)%111==0 && (n%100)%11==0)) return 1;
  return 0;
}
int locphat(int n){
  int p;
  while(n!=0){
    p=n%10;
    n/=10;
    if(p!=6 && p!=8) return 0;
  }
  return 1;
}
int tang(int n){
  int a;
    while(n>9){
        a=n%10;
        n/=10;
        if(a<=n%10)    return 0;
    }
    return 1;
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
  scanf("\n");
  char s[100];
  char mang[100]="";
  fgets(s,99,stdin);
  int n=strlen(s),dem=0,sum=0;
  for(int i=n-2;i>=0;i--){
    if(s[i]=='.') continue;
    mang[i]=s[i];
    dem++;
    if(dem==5) break;
  }
  for(int i=n-7;i<=n-2;i++){
    if(mang[i]==0) continue;
    sum=sum*10+(mang[i]-48);
  }
  if(dieukien23(sum)==1||locphat(sum)==1||tang(sum)==1){
    printf("YES\n");
  } else printf("NO\n");
  }
  return 0;
}
