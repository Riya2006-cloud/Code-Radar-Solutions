// Your code here...
#include<stdio.h>
int main(){
    int n, k=0;
    scanf("%d", &n);
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(i==0 || i==n || j==0 || j==n){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}