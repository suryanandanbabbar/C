#include <stdio.h>

// Function to ADD two numbers
int average(int a, int b, int c)
{
    // Sum of integers
    int x = (a + b + c) / 3;
    // Returning the value
    return x;
}

int main()
{
    // Declaring Numbers
    int a, b, c;

    // Taking Input
    scanf("Enter Three Numbers: %d %d %d", &a, &b, &c);

    // Calling the function
    printf("The sum of given numbers is = %d", average(a, b, c));
}