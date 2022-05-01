//
//  main.c
//  Learning C Ep18 Functions
//
//  Created by Michele Galvagno on 11/04/22.
//

#include <stdio.h>
#include <stdlib.h>

#define kTuning 442
#define OPENRANGE(value, low, high) (((value) >= (low)) && ((value) <= (high)))
#define CLOSEDRANGE(value, low, high) (((value) >= (low)) && ((value) < (high)))

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
    
    // MARK: - Declaration and definition
    // This is a function declaration, inside the main function
    void printTimeSignature(int above, int below);
    
    // Back into main, we call it, passing 'arguments' for its parameters
    printTimeSignature(3, 4);
    
    // int myFunc(a, b);
    int myF(void);
    
    // This is a function definition, inside the main function: not allowed
    /*
    int sum(int a, int b) {
        return a + b;
    }
     */
    
    void printTempo(int mm);
    printTempo(83);
    printTempo(68);
    
    // MARK: - Macros
    // Using macro values
    printf("Tonight we are playing in %d\n", kTuning);
    
    // Range operators
    void switchTempo(int mm);
    
    return 0;
}

void play_PartA() {
    printf("Here are the notes for part A:\n");
    // here I would call the relevant part of the struct and return it
    printf("Placeholder return text\n");
};

// This is the function definition, outside of the main function
void printTimeSignature(int above, int below) {
    printf("This piece is in %d/%d.\n", above, below);
}

void printTempo(int mm) {
    char * tempo;
    if (CLOSEDRANGE(mm, 144, 300)) tempo = "a Presto\n";
    else if (OPENRANGE(mm, 120, 144)) tempo = "an Allegro\n";
    else if (OPENRANGE(mm, 100, 120)) tempo = "a Moderato\n";
    else if (OPENRANGE(mm, 80, 100)) tempo = "an Andante\n";
    else if (OPENRANGE(mm, 60, 80)) tempo = "an Adagio\n";
    else if (OPENRANGE(mm, 40, 60)) tempo = "a Largo\n";
    else tempo = "too slow to bother!\n";
    /*
    if (mm >= 144) {
        tempo = "a Presto\n";
    } else if (mm >= 120 && mm < 144) {
        tempo = "an Allegro\n";
    } else if (mm >= 100 && mm < 120) {
        tempo = "a Moderato\n";
    } else if (mm >= 80 && mm < 100) {
        tempo = "an Andante\n";
    } else if (mm >= 60 && mm < 80) {
        tempo = "an Adagio\n";
    } else if (mm >= 40 && mm < 60) {
        tempo = "a Largo\n";
    } else {
        tempo = "too slow to bother!\n";
    }
     */
    printf("This movement is %s", tempo);
//    printf("This movement is an %s", (mm >= 120) ? "Allegro" : "Moderato");
}

void switchTempo(int mm) {
    char * tempo;
    switch (mm) {
        case 144 ... 300: tempo = "a Presto\n";
            break;
        case 120 ... 143: tempo = "an Allegro\n";
            break;
        case 100 ... 119: tempo = "a Moderato\n";
            break;
        case 80 ... 99: tempo = "an Andante\n";
            break;
        case 60 ... 79: tempo = "an Adagio\n";
            break;
        case 40 ... 59: tempo = "a Largo\n";
            break;
            
        default: tempo = "too slow to bother!\n";
            break;
    }
    printf("This movement is %s", tempo);
}


