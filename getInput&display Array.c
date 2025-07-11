#include <stdio.h>
int main()
{
    int arr[10],i;
    printf("Enter the 10 Numbers : ");
    for (i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
