#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
  long long t;
  scanf("%lld",&t);
  while(t--){
  char n[1000];
  scanf("%s",n);
  long long dem=0,k0=0,k1=0,k2=0,k3=0,k4=0,k5=0,k6=0,k7=0,k8=0,k9=0;

  for(long long i=0;i<strlen(n);i++){
    if(n[i]<48 || n[i]>57 || n[0]=='0') dem++;
    if(n[i]=='0') k0++;
    if(n[i]=='1') k1++;
    if(n[i]=='2') k2++;
    if(n[i]=='3') k3++;
    if(n[i]=='4') k4++;
    if(n[i]=='5') k5++;
    if(n[i]=='6') k6++;
    if(n[i]=='7') k7++;
    if(n[i]=='8') k8++;
    if(n[i]=='9') k9++;
  }
  if(dem!=0) printf("INVALID\n");
  else if(k0==0|| k1==0||k2==0||k3==0||k4==0||k5==0||k6==0||k7==0||k8==0||k9==0) {printf("NO\n");}
  else printf("YES\n");
  }
  return 0;
}n#include<stdio.h>
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
