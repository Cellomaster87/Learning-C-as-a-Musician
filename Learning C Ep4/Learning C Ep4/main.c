//
//  main.c
//  Learning C Ep4
//
//  Created by Michele Galvagno on 23/12/21.
//

// MARK: Comments
#include <stdio.h>

int main(int argc, const char * argv[]) {
    /* this is a "C-style" comment
     and it can span multiple lines
     */
    
    // this is a "C++-style" comment
    // To keep commenting on a new line I need to insert // again

    const char a = 'a'; // this is a character constant, cannot house /*
    char *b = "b ignored /* */"; // this is a string literal

    // MARK: - New section
    
    // FIXME: This section needs to be fixed
#warning("This needs to be fixed")
    
    // TODO: This needs some attention tomorrow
    
    // MARK: - ASCII
    printf("%c\n", 65);
    
    puts("Printable ASCII:");
    for (int i = 32; i < 127; i++) {
        putchar(i);
        putchar(i % 16 == 15 ? '\n' : ' ');
    }
    
    
    return 0;
}
