#include "standard.h"
#include <math.h>
void trigonometry()
{
int ch;
double rad;
printf("Enter your type of input:\n");
printf("1.Degree\n");
printf("2.Radian\n");
scanf("%d",&ch);

printf("Enter the value for which you want to find the trigonometric values:\n");
scanf("%lf", &rad);

printf("Results are as follows:\n");

if(ch==1)
    rad=rad*PI/180.0;

sineval(rad);
cosineval(rad);
tangentval(rad);

}
void sineval(double rad)
{
    printf("Sine value:%lf\n",sin(rad));
}

void cosineval(double rad)
{
    printf("Cosine value:%lf\n",cos(rad));
}

void tangentval(double rad)
{
    printf("Tangent value:%lf\n",tan(rad));
}
