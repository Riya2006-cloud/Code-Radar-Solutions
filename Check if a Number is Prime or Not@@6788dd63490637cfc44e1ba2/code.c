// Your code here...
#include<stdio.h>
int main(){
    int num1;
    scanf("%d", &num1);
    for (int i=2; i<=num1/2; i++){
        if(num1 % i == 0){
            printf("Not Prime");
        }
        else {
            printf("Prime");
        }   
    }
}