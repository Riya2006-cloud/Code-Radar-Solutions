// Your code here...
#include<stdio.h>
int main(){
    int n, num=1;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        if(i%2==0){
            num=1;
        }
        for(int j=0; j<=i; j++){
            if(num==1){
                printf("%d ", num);
                num=0;
            }
            else{
                printf("%d ", num);
                num=1;
            }
        }
        printf("\n");
    }
    return 0;
}