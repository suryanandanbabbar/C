#include <stdio.h>

int main()
{
    // Declaring a Variable
    int variable = 10;

    // Declaring a Pointer
    int *p;

    // Using Address Operator, returns address of operand
    p = &variable;
    printf("%d\n", &p); // Returns the address of variable = 1872901312

    // Indirection operator
    printf("%d", *p); // Returns the value stored in the variable = 10

    // sizeof(pointer) = unsigned (4 bits or 8 bits)
}