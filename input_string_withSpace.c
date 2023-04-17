#include <stdio.h>
#include <string.h>//string related header file

int main(){
    char a[20];
    fgets(a,10,stdin);
    printf("%s\n",a);

    // gets(a);
    // printf("%s\n",a);

    return 0;
}