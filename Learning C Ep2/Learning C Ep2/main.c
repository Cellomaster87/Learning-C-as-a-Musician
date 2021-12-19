//
//  main.c
//  Learning C Ep2
//
//  Created by Michele Galvagno on 19/12/21.
//

#include <stdio.h>

void makeCompoundOf(int beats, int value) {
    printf("The compound time of %d/%d is %d/%d\n", beats, value, beats * 3, value * 2);
}

int main(int argc, const char * argv[]) {
    makeCompoundOf(2, 4);
    return 0;
}
