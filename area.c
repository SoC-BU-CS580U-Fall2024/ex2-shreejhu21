#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float area, a, b, r, h, base;

    do {
        printf("\n--- Area Calculator ---\n");
        printf("1. Circle\n2. Rectangle\n3. Triangle\n4. Square\n5. Parallelogram\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter radius: ");
                scanf("%f", &r);
                area = 3.14 * r * r;
                printf("Area of Circle = %.2f\n", area);
                break;
            case 2:
                printf("Enter length and breadth: ");
                scanf("%f %f", &a, &b);
                area = a * b;
                printf("Area of Rectangle = %.2f\n", area);
                break;
            case 3:
                printf("Enter base and height: ");
                scanf("%f %f", &base, &h);
                area = 0.5 * base * h;
                printf("Area of Triangle = %.2f\n", area);
                break;
            case 4:
                printf("Enter side: ");
                scanf("%f", &a);
                area = a * a;
                printf("Area of Square = %.2f\n", area);
                break;
            case 5:
                printf("Enter base and height: ");
                scanf("%f %f", &base, &h);
                area = base * h;
                printf("Area of Parallelogram = %.2f\n", area);
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 6);

    return 0;
}
