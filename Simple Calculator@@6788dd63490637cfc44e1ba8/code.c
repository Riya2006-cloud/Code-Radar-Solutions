// Your code here...
#include <stdio.h>
int main(){
    float a,b,result;
    char c;
    scanf("%f %f %c",&a,&b,&c);
    if(c=='+'){
        result = a + b;
        printf("%d",result);}
    else if(c=='-'){
        printf("%d",a-b);}
    else if(c=='*'){
        printf("%d",a*b);}
    else{
        printf("%d",a/b);
    } 
    // switch(c){
    //     case '+':
    //     printf("%d",a+b);
    //     break;
    //     case '-':
    //     printf("%d",a-b);
    //     break;
    //      case '*':
    //     printf("%d",a*b);
    //     break;
    //     case '/':
    //     printf("%d",a/b);
    //     break;
    // }
    return 0;
}