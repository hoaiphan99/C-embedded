#include<stdio.h>
#include<string.h>
struct typeData
{
    int tuoi;
    char ten[12];
    int lop;
};
int main(int argc, char const *argv[])
{
    struct typeData value;
    struct typeData *ptr;
    ptr = &value;
    value.tuoi = 10;
    strcpy(value.ten,(char*)"hello world");// char *ten = "hello world"
    value.lop = 4;

    // printf("tuoi: %d\n",value.tuoi);
    // printf("ten: %s\n",value.ten);
    // printf("lop: %d\n",value.lop);

    printf("dia chi ptr: %p\n",ptr);// ptr là địa chỉ cua value
    printf("dia chi tuoi: %p\n",&(ptr->tuoi));
    printf("dia chi ten: %p\n",ptr->ten);
    printf("dia chi lop: %p\n",&(ptr->lop));

     printf("tuoi: %d\n",ptr->tuoi);// truy cập đến giá trị 
     printf("ten: %s\n",ptr->ten);
    printf("lop: %d\n",ptr->lop);

    return 0;
}


