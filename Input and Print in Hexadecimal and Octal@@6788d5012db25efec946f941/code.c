// Your code here...
#include<stdio.h>
int main(){
    int num, octal, hexa;
    scanf("%d", &num);
    octal=(num/8)+(num%8);
    printf("%d", octal);
}