// Your code here...
#include<stdio.h>
int main(){
    int n, k=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(k=0; k<n-i-1; k++){
        printf(" ");
        }
        for(int j=0; j<=(2*i); j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=n; i>0; i--){
        for(int k=0; k<i-1; k++){
            printf(" ");
        }
        for(int t=(2*i)-2; t>0; t--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}