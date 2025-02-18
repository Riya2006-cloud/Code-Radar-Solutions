// Your code here...
#include<stdio.h>
int main(){
    int num1;t=0;
    scanf("%d", &num1);
    for (int i=2; i<=num1-1; i++){
        if(num1 % i == 0){
            t=1;
            break;
        }
        else {
            printf("Prime");
        }   
    }
if(t=-0){
    printf("prime")
}
else{
    printf("not prime")
}    
}