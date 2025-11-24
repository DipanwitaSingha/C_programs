#include <stdio.h>

struct Flags {
    unsigned int a:1;
    unsigned int b:2;
    unsigned int c:3;
};

int main() {
    struct Flags f;
    f.a = 1;
    f.b = 3;
    f.c = 7;

    printf("a=%u, b=%u, c=%u\n", f.a, f.b, f.c); 
    return 0;
}

