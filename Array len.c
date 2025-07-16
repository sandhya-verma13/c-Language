#include<stdio.h>
int main(){
    int nums[]= {1,2,3,4};
    int numsSize=sizeof(nums)/sizeof(nums[0]);
    printf("%d",numsSize);
}
