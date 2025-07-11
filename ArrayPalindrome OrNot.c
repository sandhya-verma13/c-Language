#include<stdio.h>
int main(){
    int arr[5]={1,1,2,1,1};
    for(int i=0;i<5;i++){
        if(arr[i]==arr[5-1]){
            printf("The Array is Palindrome");
        }
        else{
        printf("Not a palindrome");
        }
        return 0;
    }
}
