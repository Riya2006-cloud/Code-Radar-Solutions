// Your code here...
#include<stdio.h>
int main(){
    int n, word=65;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            printf("%c ", word);
            word++;
        }
        printf("\n");
        word=65;
    }
    return 0;
}