#include<stdio.h>
int main() {
    int num1;
    scanf("%d", &num1);
    if (num1 <= 1) {
        printf("Prime");
        return 0;
    }
    for (int i = 2; i * i <= num1; i++) {
        if (num1 % i == 0) {
            printf("Not Prime");
            return 0;
        }
    }
    printf("Prime");
    return 0;
}