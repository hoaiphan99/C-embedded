#include<stdio.h>

static int a =10;
void hienthi(){
    a++;
    printf("count = %d\n",a);
}

void tong (int a, int b){
    printf("tong%d và %d = %d\n",a,b,a+b);
}