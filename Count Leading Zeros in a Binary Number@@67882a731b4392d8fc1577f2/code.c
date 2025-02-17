// Your code here...
#include<stdio.h>
int main(){
    int num,count=0;
    scanf("%d", &num);
    for(int i=0; i<32; i++){
        if(((num>>i)&1)==0)
            count++;
        }
        else{
            break;
        }
    printf("%d", count);
    return 0;
}