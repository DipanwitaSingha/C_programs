#include <stdio.h>

// Structure of multiple values
struct A {
    int a;
    char c;
};

// Function that returns struct A
struct A func() {
    struct A r;
    r.a = 10;
    r.c = 'z';
  
    // Return the struct
    return r;
}

int main() {
  
  	// Storing the returned structure
    struct A res = func();
  
    printf("a = %d, c = %c\n", res.a, res.c);
    return 0;
}
