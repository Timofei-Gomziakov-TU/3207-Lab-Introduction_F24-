#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "random.h"

char randchar(){
    // storing all of these characters here so it doesn't matter which character encoding standard the person uses
    char allChars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 

    // generate random number between 0 and 26 (26 is not included)
    int characterIndex = rand()%26; 
    char ourCharacter = allChars[characterIndex]; 

    return ourCharacter;
}