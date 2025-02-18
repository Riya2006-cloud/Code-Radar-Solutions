// Your code here...
#include<stdio.h>
int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if(num2==pow(num1,num2)){
        printf("Yes");
    }
    else {
        printf("No"); 
    }
}