#include<stdio.h>
int main(){
    int num,c=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num<=1){
        printf(" Not a prime number");
    }
    else{
        for(int i=2;i<=num/2;i++){
            if(num%i==0){
               c=1;
            }
        }
    }
    if(c==0){
        printf("prime");
    }else{
        printf("Not prime");
    }
    
}

