#include<stdio.h>
#include<string.h>
#include<stdint.h>
struct typeData
{
    uint8_t lop; // 1 byte
    uint32_t tuoi;//4byte
    uint16_t mssv;//2 byte
};
int main(int argc, char const *argv[])
{
    struct typeData value;

    printf("size:%d\n",sizeof(value));
    

}