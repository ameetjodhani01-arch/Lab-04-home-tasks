#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter weight (kg): ");
    scanf("%f", &weight);

    printf("Enter height (m): ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("BMI = %.2f -> Category: ", bmi);

    if (bmi < 18.5) {
        printf("Underweight\n");
    }
    else if (bmi < 25.0) {
        printf("Normal\n");
    }
    else if (bmi < 30.0) {
        printf("Overweight\n");
    }
    else {
        printf("Obese\n");
    }

    return 0;
}
