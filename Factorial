#include <stdio.h>
int main() {
    int num;
    unsigned long long factorial = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("The number must be non-negative.\n");
        return 1;
    } else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
    }
    printf("The factorial is %llu\n",factorial);
    return 0;
}
