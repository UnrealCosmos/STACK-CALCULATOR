#ifndef STANDARD_H
#define STANDARD_H

#include <stdio.h>
#include <stdint.h>
#include <math.h>

#define PI 3.14159265358979323846

void operations(uint8_t choice);
void arithmatic(void);
void trigonometry(void);

void Intoperation(int a, int b);
void Floatoperation(float c, float d);
void Doubleoperation(double e, double f);

void intadd(int a, int b);
void intsubtract(int a, int b);
void intmultiply(int a, int b);
int intdivide(int a, int b);
void intpower(int a, int b);

void floatadd(float c, float d);
void floatsubtract(float c, float d);
void floatmultiply(float c, float d);
int floatdivide(float c, float d);
void floatpower(float c, float d);

void doubleadd(double e, double f);
void doublesubtract(double e, double f);
void doublemultiply(double e, double f);
int doubledivide(double e, double f);
void doublepower(double e, double f);

void sineval(double rad);
void cosineval(double rad);
void tangentval(double rad);

#endif