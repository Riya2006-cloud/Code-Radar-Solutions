// Your code here...
#include<stdio.h>
int main(){
    int n, word=65;
    scanf("%d", &n);
    for(int i=n; i>0; i--){
        for(int j=i; j>0; j--){
            printf("%c ", word);
            word++;
        }
        printf("\n");
        word=65;
    }
    return 0;
}