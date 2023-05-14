#include <stdio.h>
#include"test.c"

// laays int a =10 been test.c qua 

//extern int a; // tror int a qua test.c không đc gán giá trị khi thông đc thì mới gán đc
extern void hienthi();
extern void tong(int a, int b);
//int *ptr;
// void count(){
//     static int i=0;
//     ptr = &i;
//     printf("dia chi :%p ,i=%d\n",&i,i);

//     i++;
// }
int main(int argc, char const *argv[])
{
    tong(10,17);
    hienthi();
    
    // count();
    // *ptr =10;
    // count();
    // count();
    return 0;
}