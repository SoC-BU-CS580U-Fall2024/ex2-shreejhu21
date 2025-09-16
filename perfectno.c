#include <stdio.h>

int isPerfect(int n) {
    int sum = 0;
    for(int i = 1; i <= n/2; i++) {
        if(n % i == 0)
            sum += i;
    }
    return sum == n;
}

int main() {
    int lower, upper;
    printf("Enter range (lower upper): ");
    scanf("%d %d", &lower, &upper);

    printf("Perfect numbers between %d and %d are:\n", lower, upper);
    for(int i = lower; i <= upper; i++) {
        if(isPerfect(i))
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}
