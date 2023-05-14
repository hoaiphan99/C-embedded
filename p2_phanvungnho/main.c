 #include<stdio.h>
 int e;// khong khởi tao
 static int f =0; // khởi tạo băng 0

 const int a =10;// vùng nhớ text
 int b=10;// biến toàn cục đc lưu ở phân vùng data
 static int c = 6;// biến satic toàn cục 

int tong(int a, int b){// int a = 5; int  =6;
    int c;
    c= a+b;

}

 void test(){
    printf("test b = %d\n",b);
    static int d = 6;
 }
 int main(int argc, char const *argv[])
 {
    test();
    b=b+6;
    printf("Test b1= %d",b);
    printf("tong a va b %d",tong(5,6));

    printf("tong a va b %d",tong(7,8));

    return 0;
 }
 