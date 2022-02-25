/*################################
# Palindrome checker 1.0         #
# Created by Christian Marotta   #
##################################*/

#include <stdio.h>
#include <stdlib.h>

//Functions prototypes
void printInvalidFormatError(char *prog);
void checkUpperCase(char *s);
int palindrome(char *s);

int main(int argc, char *argv[]){
    if(argc != 2) printInvalidFormatError(argv[0]);

    if(palindrome(argv[1]) == 1) printf("%s is palindrome!\n", argv[1]);
    else printf("%s isn't palindrome!\n", argv[1]);

    return 0;
}

//Called when the passed parameters are wrong
void printInvalidFormatError(char *prog){
    fprintf(stderr, "Usage:\n./%s <string>", prog);
    exit(EXIT_FAILURE);
}

//Counts the number of characters in a string
int stringLength(char *s){
    char *ps = s;
    while(*ps){//If the pointers points to something
        ps++;//Increment ps
    }
    return ps - s;//Return the the distance between the final ps position and the starting position s
}

//Checks if a character is upperCase, if so it changes it to lowerCase
void checkUpperCase(char *s){
    if(*s >= 65 && *s <= 90){
        *s += 32;
    }
}

//Checks if a string is a palindrome or not
int palindrome(char *s){
    char *ps = s, *pf = (s + stringLength(s) - 1);//Sets the *ps to the first character and *pf to the last one
    for(;(ps - pf) < stringLength(s) / 2;ps++, pf--){//Cycles through half string, incrementing ps and decrementing pf
        checkUpperCase(ps);
        checkUpperCase(pf);
        if(*ps != *pf) return 0;//If *ps != *pf then one of the characters in the first half of the string is different to the corrisponding one on the other half of the string
    }
    return 1;
}
