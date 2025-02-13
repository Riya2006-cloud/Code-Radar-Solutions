// Your code here...
#include<stdio.h>
int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int or=~(num1|num2);
    printf("%d", or);
    return 0;
}