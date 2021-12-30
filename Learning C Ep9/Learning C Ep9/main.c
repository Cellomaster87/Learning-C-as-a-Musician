//
//  main.c
//  Learning C Ep9
//
//  Created by Michele Galvagno on 28/12/21.
//

// MARK: - Types
/** The void type
 Example of a function that accepts no parameter and returns nothing; it may still perform interesting things inside of its body.
 */
void f(void);

/// Derived types
/// Arrays
int pitches[12] = {1,2,3,4,5,6,7,8,9,10,11,12};

/// Functions
int g(void); // is of type int(void)
int h(int); // is of type int(int)
/**
 Read the first function as "a function named g that accepts no parameters and returns an integer.
 Read the second function as "a function named h that accept a single integer parameter and returns an integer.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    char c = 97;
    printf("%c\n", c); // prints lowercase a
    
    unsigned int ui = -4;
    printf("The size of ui is %lu\n", sizeof(ui));
    printf("%u\n", ui);
    
    // These are the first 50 decimal digits of PI
    float pi_f = 3.14159265358979323846264338327950288419716939937510;
    double pi_d = 3.14159265358979323846264338327950288419716939937510;
    long double pi_ld = 3.14159265358979323846264338327950288419716939937510;
    printf("π is this precise:\n float: %.6f\n double: %.12lf\n long double: %.24Lf\n", pi_f, pi_d, pi_ld);
    
    double test = 314.42568;
    printf("How many digits? %f\n", test);
    
    
    
    
    return 0;
}
