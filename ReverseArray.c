#include<stdio.h>
int main(){
    int arr[4]={2000,500,200,100};
    int rev[4];
    for(int i=0;i<4;i++){
        rev[i]=arr[4-i-1];
    
    }
    for(int i=0;i<4;i++){
        arr[i]=rev[i];
    }
    for(int i=0;i<4;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}
