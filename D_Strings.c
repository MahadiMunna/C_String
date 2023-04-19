#include <stdio.h>

int main(){
    char a[20],b[20];
    gets(a);
    gets(b);
    int stra=0,strb=0;
    for(int i=0;a[i]!='\0';i++){
        stra++;
    }
    for(int i=0;b[i]!='\0';i++){
        strb++;
    }
    printf("%d %d\n",stra,strb);
    printf("%s%s\n",a,b);
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s\n",a,b);
    return 0;
}