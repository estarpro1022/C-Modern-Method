#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter phone numbers:");
    /**
     * CABLL
     * 1-523-23
     */
    while ((ch = getchar()) != '\n') {  /* \n as an end */
        ch = (char) toupper(ch);   /* upper ch */
        if ('A' <= ch && ch <= 'C')
            ch = '1';
        if ('D' <= ch && ch <= 'F')
            ch = '2';
        if ('G' <= ch && ch <= 'I')
            ch = '3';
        if ('J' <= ch && ch <= 'L')
            ch = '4';
        if ('M' <= ch && ch <= 'O')
            ch = '5';
        if ('P' <= ch && ch <= 'S')
            ch = '6';
        if ('T' <= ch && ch <= 'V')
            ch = '7';
        if ('W' <= ch && ch <= 'Z')
            ch = '8';
        printf("%c", ch);
    }
}

