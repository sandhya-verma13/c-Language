#include<stdio.h>
int main(){
    int arr[50],n;
    int pos;
    printf("Enter how many elements u want to print: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position u want to delete: ");
    scanf("%d",&pos);
    if(pos<1 || pos>n){
        printf("Invalid position");
    }
    for(int i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    printf("Updated Array : ");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
