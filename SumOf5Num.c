#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the Five numbers: ");
    for (int i=0;i<5;i++){
        scanf("%d",&n);
        sum+=n;
    }
    printf("%d",sum);
    return 0;
}
