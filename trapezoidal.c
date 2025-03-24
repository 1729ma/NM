include<stdio.h>

double findValueAt(double x)
{
    return 1/(1+x*x);
}
void f
int main()
{
    int n;
    float i,a,b,sum=0,h;
    //Input
    printf("Enter Value of a and b\n");
    scanf("%f%f",&a,&b);
    printf("Enter no. of Intervals\n");
    scanf("%d",&n);

    //....................Computations .....................

    h=(b-a)/n;
    sum = (findValueAt(a) +findValueAt(b))/2.0;
    for(i=a+h;i<b;i=i+h) {
       sum = sum + findValueAt(i);
    }
    sum = (h * sum);
    
    //Print the Output
    printf("\nValue of The integral  = %f",sum);    
    
}
