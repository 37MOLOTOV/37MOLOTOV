#include <stdio.h>

int main() {
    float fahr, celsius;
    float start, end, step;

    // Getting user input for start, end, and step
    printf("Enter the start, end, and increment values for the table: ");
    scanf("%f %f %f", &start, &end, &step);

    // Printing the heading of the table
    printf("%10s %10s\n", "Fahrenheit", "Celsius");

    fahr = start;
    while (fahr <= end) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%10.1f %10.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}
