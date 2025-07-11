
#include<stdio.h>
int main(){
    int arr[50],max=0,ind=0;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    
    printf("%d\n",max);
    
    for(int i=0;i<n;i++){
        if(arr[i]>arr[ind]){
            ind=i;
        }
    }
    printf("%d\n",ind);
    
    return 0;
}
