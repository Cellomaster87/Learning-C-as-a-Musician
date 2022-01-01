//
//  main.c
//  Learning C Ep11
//
//  Created by Michele Galvagno on 01/01/22.
//
// MARK: - Types in C, Part 3

#include <stdio.h>
#include <stddef.h>
#include <stdbool.h> // needed to write bool instead of _Bool
#include <string.h>
#include <stdint.h>

typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;

int main(int argc, const char * argv[]) {
    // MARK: - Boolean types
    bool celloIsBeautiful = true;
    _Bool playViolin = false; // the type can be expressed with bool or _Bool
    printf("%d %d\n", celloIsBeautiful, playViolin);
    
    // Logical operators
    _Bool celloRocks = true;
    printf("%d\n", celloRocks && celloIsBeautiful);
    
    _Bool playBeethoven9 = true;
    _Bool playBeethoven8 = false;
    _Bool listeningPlan = playBeethoven9 || playBeethoven8;
    printf("%d\n", listeningPlan);
    
    // MARK: - Characters
    // We declare a character variable (this means we can change its stored value
    char c;
    // We assign the value of the letter m to it
    c = 'm';
    
    printf("The letter %c has a value of %d\n", c, c);
    printf("The lowercase letter %c has a value of %d\nUppercase letter %c has a value of %d\n", c, c, c-32, c-32);
    
    // More examples
    printf("constant value     \n");
    printf("-------- ----------\n");
    
    // integer character constants,
    int c1 = 'a'; printf("'a':\t %#010x\n", c1);
    /*
    int c2 = '🍌'; printf("'🍌':\t %#010x\n\n", c2); // implementation-defined
    */
    
    // multicharacter constant
    int c3 = 'ab'; printf("'ab':\t %#010x\n\n", c3); // implementation-defined
    
    // 16-bit wide character constants
    char16_t uc1 = u'a'; printf("'a':\t %#010x\n", (int)uc1);
    char16_t uc2 = u'¢'; printf("'¢':\t %#010x\n", (int)uc2);
    char16_t uc3 = u'猫'; printf("'猫':\t %#010x\n", (int)uc3);
    
    /*
    // implementation-defined (🍌 maps to two 16-bit characters)
    char16_t uc4 = u'🍌'; printf("'🍌':\t %#010x\n\n", (int)uc4);
     */
    
    // 32-bit wide character constants
    char32_t Uc1 = U'a'; printf("'a':\t %#010x\n", (int)Uc1);
    char32_t Uc2 = U'¢'; printf("'¢':\t %#010x\n", (int)Uc2);
    char32_t Uc3 = U'猫'; printf("'猫':\t %#010x\n", (int)Uc3);
    char32_t Uc4 = U'🍌'; printf("'🍌':\t %#010x\n\n", (int)Uc4);
    
    // wide character constants
    wchar_t wc1 = L'a'; printf("'a':\t %#010x\n", (int)wc1);
    wchar_t wc2 = L'¢'; printf("'¢':\t %#010x\n", (int)wc2);
    wchar_t wc3 = L'猫'; printf("'猫':\t %#010x\n", (int)wc3);
    wchar_t wc4 = L'🍌'; printf("'🍌':\t %#010x\n\n", (int)wc4);
    
    
    
    return 0;
}
