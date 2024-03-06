#include<stdio.h>
#include<string.h>
int main(){
int n;
scanf("%d",&n);

char str1[]= to_string(n);
char str2[]= to_string(n);
for(int i =sizeof(str1)/sizeof(str1[0])-1, j = 0; i>=0, j<sizeof(str2)/sizeof(str2[0]); i--,j++){
        str2[j] = str1[i];
}
for(int i =0; i < sizeof(str2)/sizeof(str2[0]); i++ ){
    if (str1[i] == str2[j])
}

    return 0;

}