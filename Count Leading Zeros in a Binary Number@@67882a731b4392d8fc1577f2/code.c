// Your code here...
#include<stdio.h>
int main(){
    int num,count=0;
    scanf("%d", &num);
    if(num|0==0){
        count++;
        printf("%d", count);
    }
}