//
//  Unions.h
//  Learning C Ep17 Unions
//
//  Created by Michele Galvagno on 09/04/22.
//

#ifndef Unions_h
#define Unions_h

union Tunings {
    int us_A; // 445
    int eu_A; // 442
    int verdi_A; // 435
    int baroque_A; // 415
    int another_A; // 392
};

struct Musician {
    int age;
    float heigth;
    
    union FavoriteTuning {
        int myIntT;
        float myFloatT;
        double myDoubleT;
    } ft;
};


#endif /* Unions_h */
