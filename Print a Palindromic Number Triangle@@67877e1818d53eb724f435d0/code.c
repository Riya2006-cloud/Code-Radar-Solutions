// Your code here...
#include<stdio.h>
int main(){
    int n, k=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(k=0; k<=n-i-1; k++){
        printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("%d", j);
        }
        for(int j=i; j>1; j--){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}