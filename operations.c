
#include <standard.h>

void operations()
{
    printf("\n\nEnter the arguments ");
    Switch(choice[0])
    {
        case 1:
            printfln("(INTEGERS) :");
            for(int i=0;i<arg;i++)
            {
                scanf("%d", &arg1[i]);
            }
            operation((int)arg1[0], (int)arg1[1]);
            break;
        
        case 2:
            printfln("(FLOATS) :");
            for(int i=0;i<arg;i++)
            {
                scanf("%f", &arg1[i]);
            }
            operation((Float)arg1[0], (Float)arg1[1]);
            break;
        
        case 3:
            printfln("(DOUBLE)");
            for(i=0;i<arg;i++)
            {
                scanf("%lf",&arg1[i]);
            }
            operation(arg1[0], arg1[1]);
            break;


    Switch(choice[2])
    {
        case 1;
        printfln("The result:"




}

void add(arg1, arg2)
{
    printf("Added value:%d",arg1 + arg2);
}

void subtract(arg1,arg2)
{
    printf("Subtracted value:%d",arg1 + arg2);
}

void multiply(arg1,arg2)
{
    printf("Subtracted value:%d",arg1 + arg2);
}

void divide(arg1, arg2)
{
    if (arg2 == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    printfln("Quotient value:%d",arg1 / arg2);
    printfln("Remainder value:%d",arg1 % arg2);
}
void power(arg1,arg2)
{
    printfln("Added value:%d",arg1 + arg2);
}



// Float ones

void add(arg1, arg2)
{
    printf("Added value:%d",arg1 + arg2);
}

void subtract(arg1,arg2)
{
    printf("Subtracted value:%d",arg1 + arg2);
}

void multiply(arg1,arg2)
{
    printf("Subtracted value:%d",arg1 + arg2);
}

void divide(arg1, arg2)
{
    if (arg2 == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    printf("Quotient value:%d",arg1 / arg2);
}
void power(arg1,arg2)
{
    printf("Added value:%d",arg1 + arg2);
}

//Double ones

void add(arg1, arg2)
{
    printf("Added value:%d",arg1 + arg2);
}

void subtract(arg1,arg2)
{
    printf("Subtracted value:%d",arg1 + arg2);
}

void multiply(arg1,arg2)
{
    printf("Subtracted value:%d",arg1 + arg2);
}

void divide(arg1, arg2)
{
    if (arg2 == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    printf("Quotient value:%d",arg1 / arg2);
}
void power(arg1,arg2)
{
    printf("Added value:%d",arg1 + arg2);
}