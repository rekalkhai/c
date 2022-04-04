#include<stdio.h>
#include<math.h>
int uoc(int n,int m){
  if(n==0 || m==0) return m+n;
  while(m!=n){
    if(m>n) m=m-n;
    else n-=m;
  }
  return m;
}
int main(){
  int t,k=1;
  scanf("%d",&t);
  while(t--){
  int a,b,c,d,a1,b1,c1,d1,dem=0;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  a1=a;
  b1=b;
  c1=c;
  d1=d;
  a=a1/uoc(a1,b1);
  b=b1/uoc(a1,b1);
  c=c1/uoc(c1,d1);
  d=d1/uoc(c1,d1);
  printf("Case #%d:\n",k);
  k++;
  if(d>=b && d%b==0){
    printf("%d/%d %d/%d\n",a*(d/b),d,c,d);
    }
  else if(b>=d && b%d==0) {
    printf("%d/%d %d/%d\n",a,b,c*(b/d),b);
  } else 
  printf("%d/%d %d/%d\n",a*d,d*b,b*c,b*d);
  printf("%d/%d\n",(a*d+b*c)/uoc(a*d+b*c, b*d),b*d/uoc(a*d+b*c, b*d));
  printf("%d/%d\n",(a*d)/uoc(a*d,b*c),b*c/uoc(a*d,b*c));
  }
  return 0;
}
