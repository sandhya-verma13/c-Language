#include<stdio.h>
int main(){
    int price[10],n,i,j,profit=price[j]-price[i];
    int max;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&price[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            profit=price[j]-price[i];
            if(profit>max){
                max=profit;
                
              
            }
        }
        
    }
    printf("%d",max);
    return 0;
}
