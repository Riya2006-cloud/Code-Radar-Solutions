// Your code here...
#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
int started = 0;
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) { 
            printf("%d", (num >> i) & 1);
        }
    }
    printf("\n");
}