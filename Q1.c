#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter the length of side1:");
    scanf("%d", &side1);
    printf("Enter the length of side2:");
    scanf("%d", &side2);
    printf("Enter the length of side3:");
    scanf("%d", &side3);

    if (side1 + side2 <= side3 || side2 + side3 <= side1 || side1 + side3 <= side2) {
        printf("Not a Triangle");
    } else if (side1 == side2 && side2 == side3) {
        printf("Equilateral Triangle");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("Isosceles Triangle");
    } else if (side1 != side2 && side1 != side3 && side2 != side3) {
        printf("Scalene triangle");
    }

    return 0;
}
