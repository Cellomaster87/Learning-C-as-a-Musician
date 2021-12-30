//
//  TU 1.c
//  Learning C Ep10
//
//  Created by Michele Galvagno on 30/12/21.
//

#include <stdio.h>

// Translation Unit 1
struct S {int a;};
extern struct S *x;  // compatible with TU2's x, but not with TU3's x
