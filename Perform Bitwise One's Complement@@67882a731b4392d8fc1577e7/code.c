// Your code here...
#include<stdio.h>
int main(){
    int num;
    scanf("%d %d", &num);
    int or=!(num|0);
    printf("%d", or);
    return 0;
}