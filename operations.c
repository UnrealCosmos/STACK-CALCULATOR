
#include "standard.h"
void operations(uint8_t choice)
{
    int a,b;
    float c,d;
    double e,f;

    printf("\n\nEnter the arguments ");
    switch(choice)
    {
        case 1:
            printf("(INTEGERS) :");
            scanf("%d%d", &a,&b);
            Intoperation( a, b);
            break;
        
        case 2:
            printf("(FLOATS) :");
            scanf("%f%f", &c,&d);
            Floatoperation( c, d);
            break;
        
        case 3:
            printf("(DOUBLE)");
            scanf("%lf%lf",&e,&f);
            Doubleoperation( e, f);
            break;
    }
}

void Intoperation(int a, int b)
{
    intadd(a,b);
    intsubtract(a,b);
    intmultiply(a,b);   
    intdivide(a,b);
    intpower(a,b);
}
void Floatoperation(float c, float d)
{
    floatadd(c,d);
    floatsubtract(c,d);
    floatmultiply(c,d);
    floatdivide(c,d);
    floatpower(c,d);
}
void Doubleoperation(double e, double f)
{
    doubleadd(e,f);
    doublesubtract(e,f);
    doublemultiply(e,f);
    doubledivide(e,f);
    doublepower(e,f);
}

void intadd(int a, int b)
{
    printf("Added value:%d\n",a + b);
}

void intsubtract(int a, int b)
{
    printf("Subtracted value:%d\n",a-b);
}

void intmultiply(int a, int b)
{
    printf("Multiplied value:%d\n",a * b);
}

int intdivide (int a, int b)
{
    if (b == 0){
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }

    printf("Quotient value:%d\n",a / b);
    printf("Remainder value:%d\n",a % b);
    return 1;
}
void intpower(int a, int b)
{
    printf("Power value:%d\n",(int)pow(a,b));
}


// Float ones

void floatadd(float c, float d)
{
    printf("Added value:%f\n",c + d);
}

void floatsubtract(float c, float d)
{
    printf("Subtracted value:%f\n",c-d);
}

void floatmultiply(float c, float d)
{
    printf("Multiplied value:%f\n",c * d);
}

int floatdivide(float c, float d)
{
    if (d == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    printf("Quotient value:%f\n",c / d);
    return 1;
}
void floatpower(float c, float d)
{
    printf("Power value:%f\n",pow(c, d));
}

//Double ones

void doubleadd(double e, double f)
{
    printf("Added value:%lf\n",e + f);
}

void doublesubtract(double e, double f)
{
    printf("Subtracted value:%lf\n",e - f);
}

void doublemultiply(double e, double f)
{
    printf("Multiplied value:%lf\n",e * f);
}

int doubledivide(double e, double f)
{
    if (f == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    printf("Quotient value:%lf\n",e / f);
    return 1;
}
void doublepower(double e, double f)
{
    printf("Powervalue:%lf",pow(e, f));
}