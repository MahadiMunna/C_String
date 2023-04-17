#include <stdio.h>
#include <string.h>

int main(){
    char s[1000],t[1000];
    scanf("%s %s",s,t);
    int slen = strlen(s);
    int tlen = strlen(t);
    printf("%d %d\n%s %s\n",slen,tlen,s,t);
    return 0;
}