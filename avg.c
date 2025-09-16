#include <stdio.h>

int main() {
    int count = 0;
    float num, sum = 0, avg;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%f", &num);
        sum += num;
        count++;

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);
    } while(choice == 'y' || choice == 'Y');

    avg = sum / count;
    printf("Average = %.2f\n", avg);

    return 0;
}
