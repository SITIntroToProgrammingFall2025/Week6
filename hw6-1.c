#include <stdio.h>

int main(void) {
    int max;
    scanf("%d", &max);

    int first = 1;  

    for (int i = 2; i < max; i++) 
    {      
        int isPrime = 1;
        for (int j = 2; j * j <= i; j++) 
        {
            if (i % j == 0) 
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) 
        {
            if (!first) 
            {
                printf(" ");
            }
            printf("%d", i);
            first = 0;
        }
    }

    printf("\n");   
    return 0;
}
