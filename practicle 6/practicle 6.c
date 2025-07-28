#include<stdio.h>
void main()
{
    printf("conversion of temperature from Celsius to Fahrenheit\n");
    float Celsius;
    printf("enter the temperature in Celsius:\n");
    scanf("%f",&Celsius);
    float Fahrenheit= ((Celsius * 9.0)/5.0)+32;
    printf("temperature in Fahrenheit is:%f\n",Fahrenheit);

}




