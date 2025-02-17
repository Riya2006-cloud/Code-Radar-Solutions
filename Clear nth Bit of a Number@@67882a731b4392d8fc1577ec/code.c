// Your code here...
#include<stdio.h>
int main(){
    int num,n;
    scanf("%d %d", &num, &n);
    int MSB=(num>>n&1);
    if(MSB==1){
       MSB==0;
       printf("%d", num);
    }
}