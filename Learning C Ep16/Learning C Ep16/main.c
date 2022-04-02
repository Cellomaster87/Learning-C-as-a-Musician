//
//  main.c
//  Learning C Ep16
//
//  Created by Michele Galvagno on 17/03/22.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    char lvb[9] = "Beethoven";
    
    // Structures
    struct composer {
        int age;
        double heigth;
        char name[20];
    };
    
    struct composer Beethoven = {
        57,
        1.65,
        { "Ludwig van Beethoven" }
    };
    
    printf("The address of the struct Beethoven is %p\nThe address of its 'age' member is %p,\n\tof its 'heigth' member is %p,\n\tand of its 'name' member is %p.\n", &Beethoven, &Beethoven.age, &Beethoven.heigth, &Beethoven.name);
    printf("Size of age: %lu;\nSize of heigth: %lu;\nSize of name: %lu\n", sizeof(Beethoven.age), sizeof(Beethoven.heigth), sizeof(Beethoven.name));
    
    // Declaration
    struct mComp { int age; double heigth; char *name; };
    
    // Memory allocation
    struct mComp *mBeethoven = malloc(sizeof(struct mComp) + 20);
    mBeethoven->age = 57;
    mBeethoven->heigth = 1.65;
    mBeethoven->name = "Ludwig van Beethoven";
    
    printf("Beethoven's age is %d;\n\tHis heigth is %.2f;\n\tHis name is %s!\n", mBeethoven->age, mBeethoven->heigth, mBeethoven->name);
    
    // MARK: - Unnamed members
    struct v {
        union { // anonymous union
            struct { int i, j; }; // anonymous struct
            struct { long k, l; } w; // struct with two members initialised a w
        };
        int m;
    } v1;
    
    v1.i = 2;
//    v1.k = 3; // Error: No member named 'k' in 'struct v'
    v1.w.k = 5;
    
    struct compositions {
        union {
            struct { int quartets, trios, duos; } chamberWorks;
            struct { int cantatas, oratorios, missas; } choralWorks;
            struct { int symphonies, symphonicPoems, concertos; } orchestralWorks;
        };
        int total;
    };
    
    struct compositions ShostaComp;
    ShostaComp.chamberWorks.quartets = 15;
    
    struct y;
    struct x { struct y *p; /* ... */ };
    struct y { struct x *q; /* ... */ };
    
    // MARK: - Final example from the documentation
    struct car { char *make; char *model; int year; }; // declares the struct type
    // declares and initializes an object of a previously-declared struct type
    struct car c = {.year = 1923, .make = "Nash", .model = "48 Sports Touring Car" };
    printf("car: %d %s %s\n", c.year, c.make, c.model);
    
    // declares a struct type, an object of that type, and a pointer to it
    struct spaceship { char *make; char *model; char *year; }
    ship = {"Incom Corporation", "T-65 X-wing starfighter", "128 ABY"},
    *pship = &ship;
    printf("spaceship: %s %s %s\n", ship.year, ship.make, ship.model);
    
    // addresses increase in order of definition
    // padding may be inserted
    struct A { char a; double b; char c;};
    printf("offset of char a = %zu\noffset of double b = %zu\noffset of char c = %zu\n"
           "sizeof(struct A) = %zu\n", offsetof(struct A, a), offsetof(struct A, b),
           offsetof(struct A, c), sizeof(struct A));
    struct B { char a; char b; double c;};
    printf("offset of char a = %zu\noffset of char b = %zu\noffset of double c = %zu\n"
           "sizeof(struct B) = %zu\n", offsetof(struct B, a), offsetof(struct B, b),
           offsetof(struct B, c), sizeof(struct B));
    
    // A pointer to a struct can be cast to a pointer to its first member and vice versa
    char* pmake = (char*)pship;
    pship = (struct spaceship *)pmake;
    
    return 0;
}
