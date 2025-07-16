#include<stdio.h>
int main(){
    int n,m,i,j;
    printf("Enter size of Array 1:");
    scanf("%d",&n);
    int num1[n];
    printf("Enter the Elements of Array 1:");
    for(int i=0;i<n;i++){
        scanf("%d",&num1[i]);
    }
    printf("Enter the size of Array 2:");
    scanf("%d",&m);
    int num2[m];
    printf("Enter the Element of Array 2:");
    for(i=0;i<m;i++){
        scanf("%d",&num2[i]);
    }
    int merge[n+m];
    for(i=0;i<n;i++){
        merge[i]=num1[i];
    }
    for (j = 0; j < m; j++) {
        merge[i + j] = num2[j];
    }
    printf("Merged Array is: ");
    for (i = 0; i< n + m; i++) {
        printf("%d ", merge[i]);
    }
    printf("\n");
    
    int total=n+m;
    double median;
    if (total % 2 == 0) {
        median = (merge[total / 2 - 1] + merge[total / 2]) / 2.0;
    } else {
        median = merge[total / 2];
    }
    printf("%.2f\n",median);
    return 0;
    
}
