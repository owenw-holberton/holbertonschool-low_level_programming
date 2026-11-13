#include <stdio.h>
#include "main.h"

/*
* Comment for later
*/

int main(void) 
{	
    int option;
    option = 0; /* Assign a value first */

	/* Print welcome line */
	display_welcome_line();
	
    /* Display a menu */
    display_menu();    
 
    /* Read input and handle and control what happen next */
    printf("Choice: "); /* To guide user enter an input */    
    scanf("%d", &option);
    select_opt(option);
    
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
		printf("Bye");
	}
	else if (i == 1)
	{
		printf("Add");
	}
	else if (i == 2)
	{
		printf("Sub");
	}
	else if (i == 3)
	{
		printf("Multiply");
	}	
	else if (i == 4)
	{
		printf("Divide");
	}
}

