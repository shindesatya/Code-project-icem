include <stdio.h>

int main() {
    float a, b, c, x;

    printf("Enter the value of a: ");
    scanf("%f", &a);

    printf("Enter the value of b: ");
    scanf("%f", &b);

    printf("Enter the value of c: ");
    scanf("%f", &c);
    
    if (b == 0) 
        printf("Error: Division by zero is not allowed.\n");
     else 
        x = a / b - c;
        printf("The value of x is: %f\n", x);
    

    return 0;
}