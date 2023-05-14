#include<stdio.h>

#define max 100
#define tong(a,b)(a+b)
int tong2(int a, int b){
    return a+b;
}

int tong1(int a,int b){
    
}
int max2 =100;

int main(int argc, char const *argv[])
{
    printf("tong a va b%d\n",tong(3,6));
    
    printf("tong a va b%d\n",tong(2,7));

    printf("tong a va b%d\n",tong(9,4));
    printf("tong a va b%d\n",tong(3,8));
    
    // printf("tong a va b%d\n",tong2(5,7));
    return 0;
}
