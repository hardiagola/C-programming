#include<stdio.h>
void main()
{
 double weight,height,BMI;
 printf("calculator for BODY MASS INDEX(BMI)\n");
 printf("Enter your Weight in Kilograms:");
 scanf ("%lf",&weight);
 printf("Enter your Height in meters:");
 scanf("%lf",&height);
 BMI= weight/(height*height);
 printf("Your BMI is: %lf",BMI);


}


