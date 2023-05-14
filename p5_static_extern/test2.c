#include<stdio.h>
#include<stdlib.h>
int tong(int x[], int n){
        int sum =0;
        for(int i=0;i<n;i++){
            sum = sum + x[i];
        }
    printf("sum = %d\n",sum);
    return sum;
    }
int main(int argc, char const *argv[])
{
    
    
    return 0;
}
