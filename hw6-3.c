#include <stdio.h>

int main(void) 
{
    int n;
    scanf("%d", &n);

    double sum = 0.0;

    for (int i = 0; i < n; i++) 
    {
        double term = 1.0 / (2 * i + 1);
        if (i % 2 == 0) 
        {
            sum += term;
        } 
        else
        {
            sum -= term;
        }
    }

    double pi = 4.0 * sum;

    printf("The approximation up to %dth term is %.5f\n", n, pi);

    return 0;
}
