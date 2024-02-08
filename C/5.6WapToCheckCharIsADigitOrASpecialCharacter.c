#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch >= '0' && ch <= '9') {
        printf("Digit");
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Alphabet");
    }
    else {
        printf("Special Character");
    }
    return 0;
}