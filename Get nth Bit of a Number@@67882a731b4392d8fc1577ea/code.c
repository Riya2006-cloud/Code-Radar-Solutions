// Your code here...
#include<stdio.h>
int main(){
    int num,n;
    scanf("%d %d", &num, &n);
    int MSB=(num>>(n-1)&1);
    printf("%d", MSB);
}