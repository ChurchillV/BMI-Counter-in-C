#include <stdio.h>

int main() {

    printf("Enter your name: \t");
    char name[25];
    scanf("%s", &name);
    printf("Hello, %s\n", name);
//Title with decorators
    printf("### BMI CALCULATOR ###\n");

//Taking height and weight from users
    printf("Enter your weight (kg): \n");
    float weight, height;
    scanf("%f", &weight);
    printf("Enter your height (cm): \n");
    scanf("%f", &height);

//Converting integers to string with sprintf() and displaying values with puts()
    char op_weight[25];
    sprintf(op_weight, "Weight: %.2f kg", weight);
    char op_height[25];
    sprintf(op_height, "Height: %.2f cm", height);
    puts(op_weight);
    puts(op_height);

//The calculation logic
    float m_height = height/100;
    float h_squared = m_height * m_height;
    float bmi = weight/h_squared;

//Final answer
    printf("\nYou have a BMI of : %.3f", bmi);
    
    return 0;
}