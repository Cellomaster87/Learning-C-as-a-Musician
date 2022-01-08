//
//  main.c
//  Learning C Ep13
//
//  Created by Michele Galvagno on 08/01/22.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    // MARK: - Arithmetic types (Part 3)
    // MARK: - Floating types
    float a = 3 / 2;
    float b = 1 / 3;
    printf("3 divided by 2 as a float is %f, 1 divided by 3 as a float is %f\n", a, b);
    
    float c = 3.0 / 2;
    float d = 1.f / 3.f;
    printf("3 divided by 2 as a float is %f, 1 divided by 3 as a float is %f\n", c, d);

    // PRECISION
    float f_pi = M_PI;
    printf("The pi constant as a float is %.22f\n", f_pi);
    
    double d_pi = M_PI;
    printf("The pi constant as a double is %.48lf\n", d_pi);
    
    long double ld_pi = M_PI;
    printf("The pi constant as a long double is %.50Lf\n", ld_pi);
    
    // Other representations
    double e = 1.2e3;
    printf("%lf is equal to 1.2 x 10^3\n", e);
    
    // Octal
    int f = 42;
    double g = 4.267194;
    printf("%d in octal is %o, and %f in octal is not representable\n", f, f, g);
    
    // Hexadecimal
    printf("%d in hexadecimal is %x or %X, while %f is %a or %A\n", f, f, f, g, g, g);

    
    
    return 0;
}
