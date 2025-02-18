// Your code here...
#include<stdio.h>
int main(){
    int num1;t=0;
    scanf("%d", &num1);
    for (num = 2; num <= 100; num++) {
        t = 0;

        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                t= 1;
                break;
            }
        }

        if (t== 0) {
            printf("%d ", num);
        }
    }

}