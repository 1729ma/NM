// Online C compiler to run C program online
#include <stdio.h>

// Function to evaluate the given equation
double f(double x) {
    return x*x*x - 2*x - 5;
}

// Function to implement the Bisection Method
void f2(double a, double b, int maxit) {
    double x;
    int i = 1;

    // Taking valid root interval from user
    do {
        printf("Enter values for a and b: ");
        scanf("%lf %lf", &a, &b);

        if (f(a) * f(b) > 0) {
            printf("Invalid interval! f(a) and f(b) must have opposite signs.\n");
        } else {
            printf("The roots lie between %lf and %lf\n", a, b);
            break;
        }
    } while (1);

    // Bisection Method iterations
    while (i <= maxit) {
        x = (a + b) / 2.0;

        printf("Iteration %d: Approximate Root = %lf\n", i, x);

        if (f(x) == 0.0) {  // Exact root found
            break;
        } else if (f(x) * f(a) < 0) {
            b = x;
        } else {
            a = x;
        }

        i++;
    }

    printf("Final Root Approximation: %lf after %d iterations.\n", x, --i);
}

int main() {
    double a, b;
    int maxit;

    // User input for maximum iterations
    printf("Enter the maximum number of iterations: ");
    scanf("%d", &maxit);

    // Call the bisection method function
    f2(a, b, maxit);

    return 0;
}
