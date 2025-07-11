#include<stdio.h>
int main(){
    int arr[5]= {1,2,3,4,5};
    int rev[5],i;
    for(int i=0;i<5;i++){
        rev[i]=arr[5-i-1];
    }
    for(int i=0;i<5;i++){
        arr[i]=rev[i];
    }
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
