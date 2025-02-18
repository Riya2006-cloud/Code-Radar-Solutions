// Your code here...
#include<stdio.h>
int main(){
    char num;
    scanf("%c", &num);
    if(num >= 'A' && num <= 'Z'){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
}