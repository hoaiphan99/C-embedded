#include <stdio.h>
#include<stdlib.h>
char name[20] = "Nguyen A";

void test(){
    int arr[5];{
        for(int i=0;i<5;i++){
            printf("dia chi arr[%d] :%p\n",i,arr+i);
        }
    }
}
void test2(){
    int *arr;
    arr = (int*)malloc(5*sizeof(int));
   for(int i=0;i<5;i++){
            printf("dia chi arr[%d] :%p\n",i, arr+i);
        }
   free(arr);
}
int main(int argc, char const *argv[])
{
    int *ptr;
    ptr = (int *)malloc(3*sizeof(int));
    for(int i=0; i<7;i++){
        ptr[i]=i;
    }

    // ptr[0] = 10;
    // ptr[1] =20;
    // ptr[2] =30;
    for(int i=0;i<7;i++){
        printf("ptr[%d]=%d\n", i,ptr[i]);
    }

    ptr = (int *)realloc(ptr,15*sizeof(int));

    for(int i=0; i<15;i++){
        ptr[i]=i;
    }
    for(int i=0;i<15;i++){
        printf("ptr[%d]=%d\n", i,ptr[i]);
    }
    test();
    printf("---------------------");

    test();
printf("---------------------");
    test2();
printf("---------------------");
    test2();
    
    return 0;
}
