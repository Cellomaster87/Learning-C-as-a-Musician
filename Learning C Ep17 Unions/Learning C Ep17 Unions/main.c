//
//  main.c
//  Learning C Ep17 Unions
//
//  Created by Michele Galvagno on 09/04/22.
//

#include <stdio.h>
#include "Unions.h"

int main(int argc, const char * argv[]) {
    union Tunings tunings;
    
    tunings.baroque_A = 415;
    tunings.eu_A = 442;
    printf("Switching to baroque tuning: A = %d\n", tunings.baroque_A);
    printf("Checking other tunings: A = %d\n", tunings.eu_A);
    printf("Checking other tunings: A = %d\n", tunings.us_A);
    printf("Checking other tunings: A = %d\n", tunings.verdi_A);
    printf("Checking other tunings: A = %d\n", tunings.another_A);
    
    struct Musician benjamin;
    
    benjamin.age = 42;
    benjamin.heigth = 1.71;
    benjamin.ft.myIntT = 442;
    benjamin.ft.myDoubleT = 442.5;
    
    printf("Benjamin's age is %d, his heigth is %.2f, his favourite tuning is %d.\n", benjamin.age, benjamin.heigth, benjamin.ft.myIntT);
    
    // Testing a change
    
    return 0;
}
