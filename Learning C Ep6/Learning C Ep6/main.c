//
//  main.c
//  Learning C Ep6
//
//  Created by Michele Galvagno on 25/12/21.
//

#include <stdio.h>
#include <stddef.h> // we add this header to access structures

// MARK: - Global scope objects
int universalMeaning = 42;

// MARK: - Functions declarations
void f(int n);
int g(int n, int a[n]);

// MARK: - Main function
int main(int argc, const char * argv[]) {
    // MARK: - Identifiers
    char *\U0001F3BB = "violin";
    // or, also valid but with a suffix added to silence compilation errors
    char *the_🎻 = "violin emoji";
    
    // Objects: regions of data storage in memory
    char *myInstrument = "violoncello"; // reserves the space for the string "violoncello"
    const int thisYear = 2022; // reserves an immutable space for the integer 2022.
    
    // Functions: they can be declared at any scope, but they must be defined outside the main function scope
    int sum(int x, int y);
    int x = 1, y = 2;
    printf("The sum of %d and %d is %d\n", x, y, sum(x, y));
    
    /** Labels: in this case struct defines a structures
     We define a `stringInstrument` structure, with three properties inside
     Then, below, using "dot notation", we create an instance of it and access its properties
    */
    struct stringInstrument {
        int strings;
        char * timbre;
        int size;
    };
    
    struct stringInstrument cello = {
        .strings = 4,
        .timbre = "Sweet and deep",
        .size = 4/4
    };
    
    // MARK: - Scope
    // Block scope: see the function definition below
    f(42);
    
    // File scope: see lines 11-12
    
    // Function scope: more on this in a future episode
    
    // Function prototype scope:
    // see line 16 for function declaration,
    // I am quite sure this is not the proper way of calling this but I couldn't find a proper example
    const int n = 3;
    int a[n] = {0, 1, 2};
    g(n, a);
    
    
    // MARK: End of main
#warning Do not write anything after this line!
    return 0;
}

// MARK: - Functions definitions
int sum(int x, int y) {
    return x + y;
}

void f(int n) {
    n++;
    for (int n = 0; n < 10; n++) {
        printf("%d ", n);
    }
    printf("\n%d\n", n);
}

int g(int n, int a[n]) {
    printf("n is %d\n", n);
    printf("a is an array of %d elements\n", n);
    
    for (int i = 0; i < n; i++) {
        a[i] = n * i;
        printf("%d: %d\n", i, a[i]);
    }
    
    printf("\nThe last element of a is %d\n", a[n-1]);
    return n;
}

