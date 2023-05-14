#include<stdio.h>
#include<string.h>
#include<stdint.h>
union typeData
{
    uint8_t lop; // 1 byte
    uint32_t tuoi;//4byte
    uint16_t mssv;//2 byte
};
int main(int argc, char const *argv[])
{
    union typeData value;
    printf("dia chi: %p\n",&value);
    printf("dia chi: %p\n",&(value.lop));
    printf("dia chi: %p\n",&(value.tuoi));
    printf("dia chi: %p\n",&(value.mssv));

    printf("size: %d\n",sizeof(value));
    union typeData *ptr;
   ptr=&value;
    
    value.lop =10;
    value.tuoi = 15;
    value.mssv = 101;// đều trỏ đến đaiij chỉ duy nhất lên in ra 101;
    printf("lop:%d\n",ptr->lop);
    
    printf("tuoi:%d\n",ptr->tuoi);

    
    printf("mssv:%d\n",value.mssv);

}