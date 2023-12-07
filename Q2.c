#include <stdio.h>

int main() {
    float weight, height;

    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    float bmi = weight / (height * height);

    printf("Your BMI is: %.2f\n", bmi);

     if (bmi < 18.5) {
        printf("Category: Underweight\n");
    } else if (bmi >= 18.5 && bmi < 25.0) {
        printf("Category: Normal weight\n");
    } else if (bmi >= 25.0 && bmi < 30.0) {
        printf("Category: Overweight\n");
    } else if (bmi >= 30.0) {
        printf("Category: Obesity\n");
    }

    return 0;
}
