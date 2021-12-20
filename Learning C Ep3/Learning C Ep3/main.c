//
//  main.c
//  Learning C Ep3
//
//  Created by Michele Galvagno on 20/12/21.
//

#include <stdio.h>

void makeCompound(int beats, int value); // declaration

int main(int argc, const char * argv[]) {
    int a, b = 42; // "int" is the type specifier,
                    // "a" is a declarator,
                    // "b" is a declarator and 42 is its initialiser
    const int c = 26; // "int" is the type specifier,
                // "const" is the type qualifier, meaning "constant", cannot be changed
                // "c" is the declarator
    
    makeCompound(3, 4);
    
    a = 13; // initialising a
    printf("a is %d, b is %d, and c is %d\n", a, b, c); // reading into the scope of `main`
    
    /* This is a for-loop, declares an integer a with a value of 0,
     will run until a < 10 is true,
     and add 1 to a after every loop
     */
    for (int a = 0; a < 10; a++) {
        printf("a is %d\n", a); // reading into this loop's scope
    }
    
    printf("a is still %d\n", a); // the integer called a outside of the loop is unchanged
    
    return 0;
}

void makeCompound(int beats, int value) {
    int subdivisions = beats * 3, duration = value * 2;
    printf("The compound time of %d/%d is %d/%d\n", beats, value, subdivisions, duration);
}
