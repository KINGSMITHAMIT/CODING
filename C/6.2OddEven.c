#include<stdio.h>
int main(){
    int n;
    printf("Enter the num to check if it is odd or even:");
    scanf("%d", &n);
    switch (n%2 == 0)
    {
        case 0 : printf("Odd");
        break;
        case 1 : printf("Even");
        break;
    }
    return 0;
}