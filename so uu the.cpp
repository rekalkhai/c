#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
  long long t;
  scanf("%lld",&t);
  while(t--){
  char n[1000];
  scanf("%s",n);
  long long dem=0,dem1=0,dem2=0;
  int k=strlen(n);
  for(int i=0;i<k;i++){
    if(n[i]<48 || n[i]>57 ) dem++;
    if((n[i]-48)%2==0) dem1++;
    if((n[i]-48)%2==1) dem2++;
  }
  if(dem!=0 || n[0]==48) printf("INVALID\n");
   else if((k%2==0 && dem1>dem2) || (k%2==1 && dem2>dem1)){
    printf("YES\n");
  } else printf("NO\n");
  }
  return 0;
}
