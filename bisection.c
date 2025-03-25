#include <stdio.h>

double f(double x) {
    return x*x*x - 2*x - 5;
}


void f2(double a, double b, int maxit,double x) {
    
    int i = 1;
    
printf("Enter the maximum number of iterations: ");
    scanf("%d", &maxit);
    
    do {
        printf("Enter values for a and b: ");
        scanf("%lf %lf", &a, &b);

        if (f(a) * f(b) > 0) {
            printf("Invalid interval! \n");
        } else {
            printf("The roots lie between %lf and %lf\n", a, b);
            break;
        }
    } while (1);


    while (i <= maxit) {
        x = (a + b) / 2.0;

        printf("Iteration %d: Approximate Root = %lf\n", i, x);

        if (f(x) == 0.0) { 
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
    double a, b,x;
    int maxit;

    f2(a,b,maxit,x);

    return 0;
}
