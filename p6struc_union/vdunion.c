#include<stdio.h>
#include<string.h>
#include<stdint.h>
union typeData
{
    uint8_t lop[5]; // 1 byte
    uint8_t tuoi[7];//4byte
    uint8_t mssv[3];//2 byte
};
int main(int argc, char const *argv[])
{
    union typeData value;
    printf("\nlop:");
    for(int i=0;i<5; i++){
        value.lop[i]=i;
        printf("%d  ",value.lop[i]);
    }
    printf("\ntuoi:");
    for(int i=0;i<7; i++){
        value.tuoi[i]=2*i;
        printf("%d  ",value.tuoi[i]);
    }
    printf("\nmssv:");

    for(int i=0;i<3; i++){
        value.tuoi[i]=3*i;
        printf("%d  ",value.mssv[i]);
    }
    //----------------
    printf("\nlop:");
    for(int i=0;i<5; i++){
        printf("%d  ",value.lop[i]);
    }
    printf("\ntuoi:");
    for(int i=0;i<7; i++){
        printf("%d  ",value.tuoi[i]);
    }
    printf("\nmssv:");
    for(int i=0;i<3; i++){
        printf("%d  ",value.mssv[i]);
    }


}