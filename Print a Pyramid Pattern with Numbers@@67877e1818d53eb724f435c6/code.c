// Your code here...
#include<stdio.h>
int main(){
    int n, k=0, num=1;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(k=1; k<=n-i; k++){
        printf(" ");
        }
        for(int j=1; j<=(2*i)-i; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
        num=1;
    }
return 0;
}