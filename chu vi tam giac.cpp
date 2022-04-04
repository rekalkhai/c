#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		double x1,y1,x2,y2,x3,y3,max=0,s=0,p;
		scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);		
		double AB=(sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));
		double AC=(sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1)));
		double BC=(sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2)));
		if(AB>max){
			max=AB;
			s=AC+BC;
		}
		if(AC>max){
			max=AC;
			s=AB+BC;
		}
		if(BC>max){
			max=BC;
			s=AC+AB;
		}
		p=AB+BC+AC;
		
		if(max==s || max==0) printf("INVALID\n");
		else if((x3-x1)*(y2-y1)-(y3-y1)*(x2-x1)==0) printf("INVALID\n");
		else {
			if(p==(int)p) printf("%d\n",p);
			else printf("%.3lf\n",p);
		}		
	}
	return 0;
}
