//
//  main.c
//  Learning C Ep15
//
//  Created by Michele Galvagno on 18/01/22.
//

#include <stdio.h>

// MARK: - Arrays

int main(int argc, const char * argv[]) {
    // MARK: - SYNTAX
    int myArray[10];
    int m[3] = {1, 2, 3};
    
    // MARK: - EXPLANATION
    /// Constant known size
    int n[10]; // integer constants are constant expressions
    char o[sizeof(double)]; // sizeof is a constant expression
    
    printf("The size of a double is %lu bytes\n", sizeof(double));
    
    enum { MAX_SIZE = 100 };
    int p[MAX_SIZE]; // enum constants are constant expressions
    
    int a[5] = {1,2,3}; // declares int[5] initalized to 1,2,3,0,0
    for (int i = 0; i < 5; i++) {
        printf("Array element at index %d: %d\n", i, a[i]);
    }
    
    
    char str[] = "abc"; // declares char[4] initialized to 'a','b','c','\0'
    printf("The size of the str array is %lu bytes\n", sizeof(str));
    
    /// Variable-length arrays
    int q = 1;
    
    while (q < 10) {
        int a[q];
        printf( "The array has %zu elements\n", sizeof a / sizeof *a);
        q++;
    }
    
    /// Usage
    int tuning[4] = { 415, 435, 440, 442 };
    
    int c[3] = {1,2,3}, d[3] = {4,5,6};
    int (*r)[3] = &c; // okay, address of a can be taken
    // c = d;            // error, a is an array
    
    printf("The address of c is %p, and the address of r is %p\n", &c, &r);
    
    for (int i = 0; i < 3; i++) {
        printf("Array c element %d: %d, with address %p\n", i, c[i], &c[i]);
        printf("Array r element %d: %d, with address %p\n", i, *r[i], &r[i]);
        printf("=====\n");
    }
    
    struct { int e[3]; } s1, s2 = {3,4,5};
    s1 = s2; // okay: can assign structs holding array members
    
    // Multidimensional arrays
    int multi2d[2][3] = {{1,2,3}, {4,5,6}};
    
    int size = 5;
    int cuboid[size][size*2][size*3]; 
    
    return 0;
}
