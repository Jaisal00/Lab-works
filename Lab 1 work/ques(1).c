#include <stdio.h>
#include <conio.h>
struct complex
{
    float real;
    float img;
};
void main()
{
    struct complex c1,c2,c3;
    printf("enter real and img part of first number\n ");
    scanf("%f %f",&c1.real,&c1.img);
    printf("enter real and img part of second number\n ");
    scanf("%f %f",&c2.real,&c2.img);
    c3.real = c1.real+c2.real;
    c3.img = c1.img+c2.img;
    printf("The sum is %f+i%f",c3.real,c3.img);
    return 0;

}
