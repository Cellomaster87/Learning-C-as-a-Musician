//
//  main.c
//  Learning C Ep12
//
//  Created by Michele Galvagno on 03/01/22.
//

#include <stdio.h>
#include <stdint.h>

int main(int argc, const char * argv[]) {
    // MARK: - Arithmetic types (Part 2)
    // MARK: - Integer types
    // Signed and unsigned
    int n = -4;
    signed int sn = -4;
    int r = 5 % 4; // the value of 1 is stored in r
    printf("%lu\n", sizeof(r));
    
    int a = 3, b = 4;
    int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    int div = a / b;
    printf("a + b is %d\na - b is %d\na x b is %d\na / b is %d\n", sum, diff, prod, div);
    
    // Additional operations and macros
    // Minimum values
    int min8bit = INT8_MIN;
    int min16bit = INT16_MIN;
    int min32bit = INT32_MIN;
    long long min64bit = INT64_MIN;
    printf("The minimum value of signed integers differs according to their size:\n8bit: %d\n16bit: %d\n32bit: %d\n64bit: %lld\n", min8bit, min16bit, min32bit, min64bit);
    
    long long minptr = INTPTR_MIN;
    printf("The minimum value of a pointer integer object is %lld\n", minptr);
    
    // Maximum values
    int max8bit = INT8_MAX;
    int max16bit = INT16_MAX;
    int max32bit = INT32_MAX;
    long long max64bit = INT64_MAX;
    printf("The maximum value of signed integers differs according to their size:\n8bit: %d\n16bit: %d\n32bit: %d\n64bit: %lld\n", max8bit, max16bit, max32bit, max64bit);
    
    // Unsigned integers maximum values
    // Maximum values
    int U_max8bit = UINT8_MAX;
    int U_max16bit = UINT16_MAX;
    int U_max32bit = UINT32_MAX;
    long long U_max64bit = UINT64_MAX;
    printf("The maximum value of unsigned integers differs according to their size:\n8bit: %d\n16bit: %d\n32bit: %d\n64bit: %lld\n", U_max8bit, U_max16bit, U_max32bit, U_max64bit);
    
    
    return 0;
}
