#include <stdio.h>

int main(){
    char str[100000];
    scanf("%s",&str);
    for(int i = 0;str[i]!='\0';i++){
        if(str[i]<='Z' && str[i]>='A'){
            printf("%c",str[i]+32);
        }
        else if(str[i]>='a'&&str[i]<='z'){
            printf("%c",str[i]-32);
        }
        else if(str[i]==','){
            printf(" ");
        }
    }
    return 0;
}