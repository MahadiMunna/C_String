#include <stdio.h>

int main(){
    char a[5]="Munna";//no null char detected
    int sza=sizeof(a)/sizeof(char);
    printf("size of a = %d\n%s\n",sza,a);
    char b[5]="Munna\0";//null charecter out of index
    int szb=sizeof(b)/sizeof(char);
    printf("size of b = %d\n%s\n",szb,b);
    char c[6]="Munna\0";//got null charecter when given manually
    int szc=sizeof(c)/sizeof(char);
    printf("size of c = %d\n%s\n",szc,c);
    char d[]="Munna";//got null charecter by default
    int szd=sizeof(d)/sizeof(char);
    printf("size of d = %d\n%s\n",szd,d);
    char e[]="Munna\0";//array size with by default and manual null charecter
    int sze=sizeof(e)/sizeof(char);
    printf("size of e = %d\n%s\n",sze,e);
    return 0;
}

//Null charecter - /0