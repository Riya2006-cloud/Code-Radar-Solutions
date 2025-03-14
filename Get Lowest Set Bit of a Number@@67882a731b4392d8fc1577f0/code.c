// Your code here...
// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if((n>>0)&1){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}