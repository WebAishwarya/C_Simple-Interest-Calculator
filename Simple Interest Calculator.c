#include<stdio.h>

int main()
{
    printf("Assignment 1 : Simple Interest Calculator \n\n");
    printf("Task : Write a C program that takes principal, rate, and time as user input and calculates the simple interest.\n\n");
    
    float Principal, Rate_of_interst, Time;
    float Simple_Interest;
    
    printf("Enter Principal Amount : ");
    scanf("%f", &Principal);
    
    printf("\nEnter Rate Of Interest : ");
    scanf("%f", &Rate_of_interst);
    
    printf("\nEnter Time Period : ");
    scanf("%f", &Time);
    
    Simple_Interest = (Principal * Rate_of_interst * Time) / 100;
    
    printf("\nThe calculated Simple Interest is : %.2f", Simple_Interest);
    
    return 0;
}
