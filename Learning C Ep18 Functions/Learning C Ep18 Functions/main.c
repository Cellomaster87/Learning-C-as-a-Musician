//
//  main.c
//  Learning C Ep18 Functions
//
//  Created by Michele Galvagno on 11/04/22.
//

#include <stdio.h>
#include <stdlib.h>

void play_PartA(void);

int main(int argc, const char * argv[]) {
    // MARK: - Rondo form
    enum pitches { C, D, E, F, G, A, B };
    enum rhythms { whole, half, quarter, eight, sixteenth, thirtysecond };
    
    struct note {
        enum pitches p;
        enum rhythms r;
    };
    
    struct note first;
    first.p = C;
    first.r = whole;
    
    struct musicalPart {
        // This struct contains every instruction to generate our music
        // It has a call to printf at the end to print all notes in the correct order
    };
    
    struct musicalPart part_A;
    struct musicalPart part_B;
    struct musicalPart part_C;
    
    play_PartA();
    
    
    return 0;
}

void play_PartA() {
    printf("Here are the notes for part A:\n");
    // here I would call the relevant part of the struct and return it
    printf("Placeholder return text");
};
