// Your code here...
#include<stdio.h>
int main(){
    int num,n;
    scanf("%d %d", &num, &n);
    int MSB=num>>n;
    if((1&MSB)==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}