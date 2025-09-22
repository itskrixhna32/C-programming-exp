#include <stdio.h>

int globalVar = 100;

void myFunction()
{
    int localVar = 10; // Local variable

    printf("Inside function: localVar = %d\n", localVar);
    printf("Inside function: globalVar = %d\n", globalVar);
}

int main()
{
    myFunction();

    printf("Outside function: globalVar = %d\n", globalVar); // ✅ Works fine

    return 0;
}
