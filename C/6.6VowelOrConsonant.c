
#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character in lowercase : ");
    scanf("%c", &ch);
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Vowel");
            break;
        default:
            printf("Consonant");
            break;
    }
    return 0;
}
