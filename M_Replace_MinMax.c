#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int min=100000,max=0,minp=0,maxp=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<min){
            min=arr[i];
            minp=i;
        }
        if(arr[i]>max){
            max=arr[i];
            maxp=i;
        }
    }
    int temp = arr[minp];
    arr[minp] = arr[maxp];
    arr[maxp] = temp;

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}