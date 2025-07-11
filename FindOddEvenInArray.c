
#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int ev[10],odd[10],i,e=0, o=0;
    for(i=0;i<10;i++){
        if(arr[i]%2==0){
            ev[e]=arr[i];
            e++;
        }
        else{
            odd[o]=arr[i];
            o++;
        }
        
    }
    printf("Even\n");
    for(i=0;i<e;i++){
        printf("%d\n",ev[i]);
    }
    printf("Odd\n");
    for(i=0;i<o;i++){
        printf("%d\n",odd[i]);
    }
    return 0;
}


