#include <stdio.h>

double f(double x) {
    return 1 / (1 + x * x);
}

int main() {
    double a, b, h, sum;
    int n;

    // Input values
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the values of a and b: ");
    scanf("%lf %lf", &a, &b);

    // Calculate step size
    h = (b - a) / n;
    sum = f(a) + f(b);  // First and last terms

    // Apply Simpson's Rule
    for (int i = 1; i < n; i++) {
        double x = a + i * h;  // Compute x_i
        if (i % 2 == 0) {
            sum += 2 * f(x);  // Even indices get weight 2
        } else {
            sum += 4 * f(x);  // Odd indices get weight 4
        }
    }

    // Final Simpson’s rule computation
    sum = (sum * h) / 3;

    // Output the result
    printf("The answer is: %lf\n", sum);

    return 0;
}
