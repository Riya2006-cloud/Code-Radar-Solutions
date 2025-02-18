// Your code here...
#include<stdio.h>
#include<math.h>
int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int z=pow(num2,num2);
    if(num1==z){
        printf("Yes");
    }
    else {
        printf("No"); 
    }
}