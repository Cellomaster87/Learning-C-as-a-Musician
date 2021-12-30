//
//  TU 3.c
//  Learning C Ep10
//
//  Created by Michele Galvagno on 30/12/21.
//

#include <stdio.h>

// Translation Unit 3
struct S {float a;};
extern struct S *x; // compatible with TU2's x, but not with TU1's x
