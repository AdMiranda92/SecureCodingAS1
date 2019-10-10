#include <stdio.h>
#include "bstrlib.h"

//Removes the newline character at the end of the bstring, if one is present.
void rmNewLine(bstring a) {
    if(a->data[a->slen - 1] == '\n') {
        bdelete(a, a->slen - 1, 1); 
    }
}

int main(void) {
    bstring s = bgets ((bNgetc) fgetc, stdin, '\n');
    if(s) {  //Check that a string was read
        rmNewLine(s);
        printf("The input string is: %s\n", s->data);
    }
    else {
        puts("Please provide input in the Input tab.");
    }
    //print out length of string s for task 1
    printf("Length of string s: %d\n", blength(s));
    bdestroy(s);
    
    
    // task 2:
    // read strings s1 and s2
    bstring s1 = bgets ((bNgetc) fgetc, stdin, '\n');
    if(s1) {  //Check that a string was read
        rmNewLine(s1);
        printf("The input string is: %s\n", s1->data);
    }
    else {
        puts("Please provide input in the Input tab.");
    }
    
    bstring s2 = bgets ((bNgetc) fgetc, stdin, '\n');
    if(s2) {  //Check that a string was read
        rmNewLine(s2);
        printf("The input string is: %s\n", s2->data);
    }
    else {
        puts("Please provide input in the Input tab.");
    }
    
    //concatenate s2 to s1 and print out the result
    bconcat(s1, s2);
    printf("The concatenated string is: %s\n", s1->data);
    bdestroy(s1);
    bdestroy(s2);
    
    //task 3:
    //read s1 and s2 and print out and print out a message
    //indicating whether s2 is a substring of s1
    s1 = bgets ((bNgetc) fgetc, stdin, '\n');
    if(s1) {  //Check that a string was read
        rmNewLine(s1);
        printf("The input string is: %s\n", s1->data);
    }
    else {
        puts("Please provide input in the Input tab.");
    }
    
    s2 = bgets ((bNgetc) fgetc, stdin, '\n');
    if(s2) {  //Check that a string was read
        rmNewLine(s2);
        printf("The input string is: %s\n", s2->data);
    }
    else {
        puts("Please provide input in the Input tab.");
    }
    
    //use binstr to determine if s2 is a substring of s1
    int found = binstr(s1, 0, s2);
    
    //print out results
    if(found != -1){
        printf("String %s is a substring of string %s", s2->data, s1->data);
    } else{
        printf("String %s is not a substring of string %s", s2->data, s1->data);
    }
    bdestroy(s1);
    bdestroy(s2);
}