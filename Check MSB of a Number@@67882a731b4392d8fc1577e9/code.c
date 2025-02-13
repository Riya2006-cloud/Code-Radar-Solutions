// Your code here...
#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    int MSB=1<<31;
    if((num&MSB)=1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}