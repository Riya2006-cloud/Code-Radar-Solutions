// Your code here...
#include<stdio.h>
int main(){
    int n, num=1;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf("%d ", num);
        }
        printf("\n");
        if(num==0){
            num=1;
        }
        else{
            num=0;
        }
    }
    return 0;
}