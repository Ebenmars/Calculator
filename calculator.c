#include <stdio.h>

double add(double num1, double num2);
double subtract(double num1, double num2);
double divide(double num1, double num2);
double mutiply(double num1, double num2);

int main(void){
    
    double num1;
    double num2;
    int operation; 
    printf("Enter number 1: ");
    scanf("%lf",&num1);

    printf("Enter number 2: ");
    scanf("%lf", &num2);

    printf("Select operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Mutiplication\n");
    printf("4. Division\n");

    printf("Enter below:\n");
    scanf(" %d", &operation);
    printf("\n");

    switch (operation){
        case 1:
            printf("The Answer is: %.0lf\n", add(num1, num2));
            break;
        case 2:
            printf("The Answer is: %.0lf\n", subtract(num1, num2));
            break;
        case 3:
            printf("The Answer is: %.0lf\n", mutiply(num1, num2));
            break;
        case 4:
            printf("The Answer is: %.0lf\n", divide(num1, num2));
        default : 
            printf("%d is not valid", operation);
            break;
        
    }
    printf("\n");
}

double add(double num1, double num2)
{
    return num1 + num2;
}

double subtract(double num1, double num2)
{
    return num1 - num2;
}

double mutiply(double num1, double num2)
{
    return num1 * num2;
}

double divide(double num1, double num2)
{
    return num1 / num2;
}