// Your code here...
// #include<stdio.h>
// int main(){
//     int num,count=0;
//     scanf("%d", &num);
//     for(int i=31; i>-0; i--){
//         if(((num>>i)&1)==0)
//             count++;
//         else
//             break;
//         }
//     printf("%d", count);
//     return 0;
// }




















#include<stdio.h>
int main(){
    int num, count;
    scanf("%d", &num);
    for(int i=31; i>=0; i--){
        if(((num>>i)&1)==0){
            count++;
        else
            break;
        }
    }
    printf("%d", count);
}