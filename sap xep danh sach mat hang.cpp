#include<stdio.h>
#include<string.h>

struct book{
    char name[100];
	char group[100];
	double gm;
	double gb;
	long long ms;
	double tienlai;
};
void sapxep(struct book list[],long long t){
	
	long long i,j;struct book tmp;
	for( i=1;i<t;i++){
		
		for(j=t;j>i;j--){
			if(list[j].tienlai>list[j-1].tienlai){
				tmp=list[j];
				list[j]=list[j-1];
				list[j-1]=tmp;
				
			}
			
		}
		
	}
}

int main(){
	struct book list[1000];

	long long t;scanf("%lld\n",&t);
	for(long long i=1;i<=t;i++){
		
		gets(list[i].name);scanf("\n");
		gets(list[i].group);scanf("\n");
		scanf("%lf",&list[i].gm);
        scanf("%lf",&list[i].gb);
		list[i].ms=i;
		list[i].tienlai=(double)(list[i].gb-list[i].gm);
		scanf("\n");	
	}
	sapxep(list,t);
	for(long long i=1;i<=t;i++){
		printf("%lld %s %s %.2lf\n",list[i].ms,list[i].name,list[i].group,list[i].tienlai);
	}
	
	return 0;
}
