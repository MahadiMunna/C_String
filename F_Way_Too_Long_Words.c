#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",&a);
        int sz = strlen(a);
        char fl = a[0],ll = a[sz-1]; 
        if(sz>10){
            printf("%c%d%c\n",fl,sz-2,ll);
        }
        else{
            printf("%s\n",a);
        }
    }
    return 0;
}