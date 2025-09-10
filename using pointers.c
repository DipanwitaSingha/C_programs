#include <stdio.h>


void foo(int* a, char* c) {
  
  	// Writing data to passed addresses
    *a = 20;
  	*c = 'z';
}

int main() {
    int a;
  	char c;
  	foo(&a, &c);
  
    printf("a = %d, c = %d", a, c);
    return 0;
}
