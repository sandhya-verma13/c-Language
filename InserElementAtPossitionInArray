
#include<stdio.h>
int main(){
    int arr[50],n,pos,v;
    printf("Enter how many elements You want to print: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position u want to insert : ");
    scanf("%d",&pos);
    printf("Enter the Element u want to insert at the position: ");
    scanf("%d",&v);
    if(pos<1 || pos>n+1){
        printf("Invalid Position");
    }
    for(int i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=v;
    n++;
    printf("Updated Array : ");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
