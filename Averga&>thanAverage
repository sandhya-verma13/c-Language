#include<stdio.h>
int main(){
    int arr[5]={75,90,66,82,45};
    float av=0;
    int sum=0,g=-1;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    av=sum/5.0;
    for(int i=0;i<5;i++){
        if(arr[i]>av && arr[i]>g){
            g=arr[i];
        }
    }
    printf("%.2f\n",av);
    if(g!=-1){
        printf("%d\n",g);
    }
    return 0;
}
