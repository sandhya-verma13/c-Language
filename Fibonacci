#include<stdio.h>
int main(){
    int n,fibb,f0=0,f1=1;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n<=1){
        printf("The series is %d,%d",f0,f1);
    }else{
        for(int i=2;i<=n;i++){
          fibb=f0+f1;
          f0=f1;
          f1=fibb;
        }
        printf("%d",fibb);
    }
    return 0;
    
}

---------------------------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
int main() {
    int n;
    int f0 = 0, f1 = 1, fibb;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    printf("Fibonacci series up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d ", f0);
        } else if (i == 1) {
            printf("%d ", f1);
        } else {
            fibb = f0 + f1;
            printf("%d ", fibb);
            f0 = f1;
            f1 = fibb;
        }
    }
    printf("\n");
    return 0;
}





















