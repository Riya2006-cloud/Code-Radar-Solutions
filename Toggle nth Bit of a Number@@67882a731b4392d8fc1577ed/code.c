// Your code here...
#include<stdio.h>
int main(){
    int num,n;
    scanf("%d %d", &num, &n);
    if((num>>n)&1){
        num=num & ~(1<<n);
        printf("%d", num);
    }
    else{
        num=num | (1<<n);
        printf("%d", num);
    }
}