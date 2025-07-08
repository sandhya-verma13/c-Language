#include<stdio.h>
#include<math.h>
int main(){
    int n,num=0,r=0,c=0;
     double sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    num=n;
    while(num>0){
        num=num/10;
        c++;
    }
    sum=0;
    num=n;
    while(num>0){
        r=num%10;
        sum+=pow(r,c);
        num=num/10;
    }
    // printf("%.0lf\n",sum);
    if ((int)sum == n) {
        printf("Armstrong Number");
    }else{
        printf("Not a Armstrong Number");
    }
    return 0;
}
