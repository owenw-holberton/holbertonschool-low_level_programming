#include <stdio.h>
#include "main.h"

/*
* Comment for later
*/

int main(void) 
{	
    int option;
    option = 999; /* Assign a value first */

	/* Print welcome line */
	display_welcome_line();
	 
    /* Read input and handle and control what happen next */
    while (option != 0)
    {
        display_menu();
        printf("Choice: "); /* To guide user enter an input */    
        scanf("%d", &option);
        if (option >= 0 && option <= 4)
        {
            select_opt(option);
        }
        else
        {
            printf("Invalid choice\n");
        }
    }
	return 0;
}

void display_welcome_line(void)
{
    printf("Simple Calculator\n");
}

void display_menu(void)
{
    printf("1) Add\n");
    printf("2) Subtract\n");
    printf("3) Multiply\n");
    printf("4) Divide\n");
    printf("0) Quit\n");
}

void select_opt(int i)
{
	if (i == 0)
	{
	    printf("Bye!\n");
	}
	else if (i == 1)
	{
		add();
	}
	else if (i == 2)
	{
		subtract();
	}
	else if (i == 3)
	{
		multiply();
	}	
	else if (i == 4)
	{
		divide();
	}
}

void add(void)
{
    float a;
    float b;
    float result;
    
    /* Ask user for value of A */
    printf("A: ");
    scanf("%f", &a);
  
    /* Ask for B */
    printf("B: ");
    scanf("%f", &b);
    
    result = a + b;
    printf("Result: %.2f\n", result);
}

void subtract(void)
{
    float a;
    float b;
    float result;
    
    printf("A: ");
    scanf("%f", &a);
  
    printf("B: ");
    scanf("%f", &b);
    
    result = a - b;
    printf("Result: %.2f\n", result);
}

void multiply(void)
{
    float a;
    float b;
    float result;
    
    printf("A: ");
    scanf("%f", &a);
  
    /* Ask for B */
    printf("B: ");
    scanf("%f", &b);
    
    result = a * b;
    printf("Result: %.2f\n", result);
}

void divide(void)
{ 
    float a;
    float b;
    float result;
    
    printf("A: ");
    scanf("%f", &a);
  
    /* Ask for B */
    printf("B: ");
    scanf("%f", &b);

    if (b == 0)
    {
        printf("Error: division by zero\n");
    }
    else
    {
        result = a / b;
        printf("Result: %.2f\n", result);
    }
}

