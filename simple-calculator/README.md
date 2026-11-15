### Compile command
To compile this program with the flag it is tailored to, run the following command;
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

### Run instructions
To run this calculator program, after compiling the c file successfully (with no warning or error)
Run: ./calculator

### Supported operations
This program can compute the following operation on 2 number
* Addition +
* Subtraction -
* Multiplication *
* Division /
### 
Numeric behaviour
I decided to use float for all operations, specifically 2 significant figure as it is possibly most suitable for daily use

### Known limitations
Input limitation
* Value limitation: Since input is store as float there is a highest and lowest value user can use, which is 3.402823466e+38F and -3.402823466e+38F respectively
* Input validation: The program is unable to handle non numeric value for all input field I.e. if user try entering a string "hello world" as input for menu, the program will run infinitely

The only validation implemented are:
* Menu: Reject numeric value that are not one of the valid options
* Division: Reject 0 as divisor