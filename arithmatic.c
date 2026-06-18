#include "standard.h"
void arithmatic()
{
    uint8_t v;
    int sum = 0;
    float avg, med;

    printf("Enter the number of elements required: ");
    scanf("%hhu", &v);

    int ar[v];

    printf("Enter the elements in order:\n");

    for(int i = 0; i < v; i++)
    {
        scanf("%d", &ar[i]);
        sum += ar[i];
    }

    avg = (float)sum / v;

    if(v % 2 == 0)
    {
        med = (ar[v/2] + ar[v/2 - 1]) / 2.0;
    }
    else
    {
        med = ar[v/2];
    }

    printf("Average of all numbers: %.2f\n", avg);
    printf("Median of all numbers: %.2f\n", med);
    printf("Sum of all numbers: %d\n", sum);
}