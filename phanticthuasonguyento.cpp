#include <stdio.h>
 
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int n;
    scanf("%d", &n);
    int dem;
    printf("%d = ",n);
    for(int i = 2; i <= n; i++){
        dem = 0;
        while(n % i == 0){
            dem++;
            n /= i;
        }
            if(dem>=1) printf("%d^%d", i, dem);
            if(n > i && dem!=0){
                printf(" * ");
            }
        }
    printf("\n");
  }
  return 0;
}
