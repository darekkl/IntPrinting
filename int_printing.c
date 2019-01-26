#include <stdio.h>
#include "int_printing.h"

void put_string(char *s) {
    while(*s != 0) {
        put_char(*s);
        s++;
    }
}

long long get_int(void) {
    long long x = 0;
    char c;
    enum {Y, N} neg = N;

    do
        c = getchar();
    while(!((c >= '0' && c <= '9') || c == '-'));

    if(c == '-') {
        neg = Y;
        
        c = getchar();
    }

    while(c >= '0' && c <= '9') {
        x *= 10;
        x += c - '0';
        
        c = getchar();
    }

    if(neg == Y)
        x = -x;

    return x;
}

unsigned long long get_unsigned_int(void) {
    unsigned long long x = 0;
    char c;

    do
        c = getchar();
    while(!(c >= '0' && c <= '9'));

    while(c >= '0' && c <= '9') {
        x *= 10;
        x += c - '0';
        
        c = getchar();
    }

    return x;
}

void put_int(long long x) {
    char str[20];
    unsigned char index1 = 0;
    enum {Y, N} neg = N;

    if(x < 0) {
        neg = Y;
        x = -x;
    }

    for (; x; x /= 10)
        str[index1++] = '0' + (x % 10);

    if(neg == Y)
        putchar('-');

    for (char index2 = index1 - 1; index2 >= 0; index2--)
    {
        putchar(str[index2]);
    }
}

void put_unsigned_int(unsigned long long x) {
    char str[70];
    unsigned char index1 = 0;
    enum {Y, N} neg = N;

    if(x < 0) {
        neg = Y;
        x = -x;
    }

    for (; x; x /= 10)
        str[index1++] = '0' + (x % 10);

    if(neg == Y)
        putchar('-');

    for (char i = index1 - 1; i >= 0; i--)
    {
        putchar(str[i]);
    }
}
