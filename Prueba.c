#include <stdlib.h> //Standard library
#include <stdio.h> //Standard input / output

int main() {
    int a = 0;
    int b = 0;
    
    fscanf("%i%*c", &a);
    fscanf("%i%*c", &b);

    int result = a + b;

    printf("%i", result);

    return 0;
}