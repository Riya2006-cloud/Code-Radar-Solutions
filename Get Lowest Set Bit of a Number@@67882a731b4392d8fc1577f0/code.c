// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<=n; i++){
        if((n>>i)&1){
            printf("%d", i);
            break;
        }
    }
    return 0;
}