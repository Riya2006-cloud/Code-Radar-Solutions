// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n%3==0){
        if(n%5==0){
            printf("Divisible by Both");
        }
        else{
            printf("Divisible by 3");
        }
    }
    else{
        printf("Not Divisible");
    }
    if(n%5==0){
        printf("Divisible by 5");
    }
}