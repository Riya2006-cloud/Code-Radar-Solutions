// Your code here...
#include<stdio.h>
int main(){
    int n, word=65;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<=(2*i); j++){
            printf("%d", word);
            word++;
        }
        printf("\n");
        word=65;
    }
    return 0;
}