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
    struct Thisinh max = thisinh[0];
    for (int i = 1; i < n; i++) {
        if (thisinh[i].diemtb >= max.diemtb) {
            max = thisinh[i]; 
        }
    }
    for (int i = 0; i < n; i++) {
        if (thisinh[i].diemtb == max.diemtb) {
            printf("%d %s %s %.1f\n",thisinh[i].stt,thisinh[i].name,thisinh[i].ngaysinh,thisinh[i].diemtb);
        }
    }
    
    return 0;
}
