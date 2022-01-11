//
//  main.c
//  Learning C Ep14
//
//  Created by Michele Galvagno on 11/01/22.
//

// MARK: - Enumerations

#include <stdio.h>

void foo(void);

struct Element {
    int z;
    enum State { SOLID, LIQUID, GAS, PLASMA } state;
} oxygen = { 8, GAS };
// type enum State and its enumeration constants stay visible here

int main(int argc, const char * argv[]) {
    // MARK: - Syntax
    enum notes { C, D, E, F, G, A, B };
    // enum is the tag
    // notes is the identifier, with no attribute-specific sequence before
    // inside the braces, the comma-separated list of enumerators
    
    /*
    enum germanNotes { C, D, E, F, G, A, H }; // yes, B = H in the German system, while B is B-flat
    enum frenchNotes { UT, RE, MI, FA, SOL, LA, SI }; // ut = C, and is a remnant of a very long time ago
    enum italianNotes { DO, RE, MI, FA, SOL, LA, SI };
     */
    
    enum ks { C_major, A_minor, G_major, E_minor, F_major, D_minor} requiem = D_minor;
    switch (requiem) {
        case C_major:
            printf("This piece is in C major\n");
            break;
        case A_minor:
            printf("This piece is in A minor\n");
            break;
        case G_major:
            printf("This piece is in G major\n");
            break;
        case E_minor:
            printf("This piece is in E minor\n");
            break;
        case F_major:
            printf("This piece is in F major\n");
            break;
        case D_minor:
            printf("This piece is in D minor\n");
            break;
        default:
            break;
    }
    
    // MARK: - Explanation
    enum en { AA, BB, CC=4, DD, EE=1, FF, GG=FF+CC };
    // AA=0, BB=1, CC=4, DD=5, EE=1, FF=2, GG=6
    
    enum strIns { VIOLIN, VIOLA, CELLO, BASS };
    enum strIns myIns = CELLO;
    // strIns yourIns = VIOLIN;
    
    typedef enum strIns Strings;
    Strings yourIns = VIOLIN;
    
    enum { ONE = 1, TWO } e;
    long n = ONE; // promotion
    double d = ONE; // conversion
    e = 1.2; // conversion, e is now ONE
    e = e + 1; // e is now TWO
    
    printf("n is equal to %ld; d is equal to %f, e is assigned 1.2 but is actually %u in the end\n", n, d, e);
    
    // MARK: - Final considerations
    enum Genres;
    enum Genres { CLASSICAL, JAZZ, BLUES, POP, ROCK };
    
    foo();
    
    return 0;
}

void foo(void) {
    enum State e = LIQUID; // OK
    printf("%d %d %d \n", e, oxygen.state, PLASMA); // prints 1 2 3
}
