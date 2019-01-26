#include <stdio.h>
#include "int_printing.h"

int main(void) {
    put_string("Enter a: ");
    long long a = get_int();
    
    put_string("Enter b: ");
    long long b = get_int();
    
    put_string("a + b = ");
    put_int(a + b);
    put_char('\n');
}
