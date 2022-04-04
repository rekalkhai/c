#include<stdio.h>
#include<string.h>
#include <stdlib.h>
struct Thisinh {
    int stt;
    char name[50];
    char ngaysinh[50];
    float diem1;
    float diem2;
    float diem3;
    float diemtb;
};
void swap(struct Thisinh* a,struct Thisinh* b) {
    struct Thisinh temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int n;
    scanf("%d\n", &n);
    struct Thisinh thisinh[n];
    for (int i = 0; i < n; i++) {
        thisinh[i].stt = i + 1;
        gets(thisinh[i].name);scanf("\n");
        gets(thisinh[i].ngaysinh);scanf("\n");
        scanf("%f",&thisinh[i].diem1);
        scanf("%f",&thisinh[i].diem2);
        scanf("%f",&thisinh[i].diem3);
        scanf("\n");
        thisinh[i].diemtb = thisinh[i].diem1 + thisinh[i].diem2 + thisinh[i].diem3;
    }
    struct Thisinh temp;
  	for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (thisinh[j].diemtb > thisinh[i].diemtb) {
                swap(&thisinh[i],&thisinh[j]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
            printf("%d %s %s %.1f\n",thisinh[i].stt,thisinh[i].name,thisinh[i].ngaysinh,thisinh[i].diemtb);
    }
    
    return 0;
}
