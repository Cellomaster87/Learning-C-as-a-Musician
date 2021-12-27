//
//  main.c
//  Learning C Ep8
//
//  Created by Michele Galvagno on 27/12/21.
//

#include <stdio.h>

int playNotes(void);

// MARK: - Tag namespace
enum DmajorScale { D = 1, E, Fsharp, G, A, B, Csharp };
// sadly I cannot use the # nor the - characters for sharps and to write F-sharp
// I assigned the value of 1 to D because, by default, it would begin counting at 0

struct DmajorScale {
    int notes;
};

union DmajorScale {
    int keySignature;
};

// MARK: - Member namespace
struct MajorScale {
    int notes;
    int keySignature; // a value between -7 (seven flats) and 7 (seven sharps)
    
    char * notes;
    /* even if I want to use a different type, in this case to list the notes by name
        the compiler tells me I cannot do that.
     */
};

int main(int argc, const char * argv[]) {
    // How a switch statement works
    int noteC = 1;
    
    switch (noteC) {
        case 1:
            printf("C is the first note of the scale\n");
            break;
        case 2:
            printf("This may be the B-flat major scale\n");
            break;
            
        default:
            printf("Think again!\n");
            break;
    }
    
    // Application of tag namespace
    int thirdGradeOfD = Fsharp;
    printf("F sharp is grade n° %d in the D major scale\n", thirdGradeOfD);
    
    // MARK: - General namespace
    int fourthGradeOfD;
    const char fourthGradeOfD;
    char * fourthGradeOfD;
    void fourthGradeOfD(void);
    
    return 0;
}

// MARK: - Demonstration of label namespace
int playNotes() {
firstStatement:
    printf("This is my first statement");
    int firstStatement = 0;
//firstStatement:
    firstStatement = 1;
    
    return 0;
}
