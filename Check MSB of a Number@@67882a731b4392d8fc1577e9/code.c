// Your code here...
#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    int MSB=num>>31;
    if((1&MSB)==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}