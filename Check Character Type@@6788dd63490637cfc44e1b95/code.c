// Your code here...
// Your code here...
#include<stdio.h>
int main(){
    char num;
    scanf("%c", &num);
    if(num == 'a' || num=='e' || num=='i' || num=='o' || num=='u' || num=='A' ||num=='E' ||num=='I' || num=='O' || num=='U'){
        printf("Vowel");
    }
    else if ((num >= 'a' && num <= 'z') || (num >= 'A' && num <= 'Z')) {
        printf("Consonant");
    }
    else if (num >= '0' && num <= '9') {
        printf("Digit");
    }
    else {
        printf("Special Character");
    }
}