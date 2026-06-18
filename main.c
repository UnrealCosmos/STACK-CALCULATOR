#include "standard.h"
int main()
{
    uint8_t choice1,choice2,n;


    printf("Welcome!! Let's do Maths\n\n");

    printf("Enter the type of operation you want to perform:\n");
    printf("1. Basic operations (+,-,*,/)\n");
    printf("2. Average, sum and median\n");
    printf("3. Trigonometric operationns (sin,cos,tan)\n");
    scanf("%hhu", &choice1);

    switch(choice1)
    {
        case 1:
        printf("Enter your choice:\n");
        printf("1.Integer\n");
        printf("2.Float\n");
        printf("3.Double\n");
        scanf("%hhu", &choice2);

        operations(choice2);
        break;

        case 2:
        arithmatic();
        break;

        case 3:
        trigonometry();
        break;
    }
    return 0;
    }

    