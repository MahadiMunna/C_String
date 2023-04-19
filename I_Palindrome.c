#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    gets(str);
    int len = strlen(str),flag=0;
    for(int i=0,j=len-1;str[i]!='\0';i++,j--){
        if(str[i]!=str[j]){
            flag++;
            break;
        }
    }
    if(flag){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
    return 0;
}