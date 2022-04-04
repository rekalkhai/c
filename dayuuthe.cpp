#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
  int t;
  scanf("%d",&t);
  while(t--){

  char s[100000];
  int dem=0,dem1=0,dem2=0;
  fgets(s,10000,stdin);
  if(s[0]!=32) dem++;
  int n=strlen(s);
  for(int i=0;i<n-2;i++){
    if(s[i]==' '&& s[i+1]!=' ') dem++;
  }
  for(int i=0;i<n;i++){
    if(s[i]==32 && s[i+1]!=32) {
      if(s[i-1]%2==0) {
        dem1++;
      }
      else dem2++;
    }
  }
  if(s[n-2]%2==0) dem1++;
  else dem2++;
  if((dem%2==0 && dem1>dem2)||(dem%2==1&&dem2>dem1)) printf("YES\n");
  else printf("NO\n");
  }
  return 0;
}
