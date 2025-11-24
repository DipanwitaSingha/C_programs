#include <stdio.h>

int main() {
    int n = 5,i,j; // You can change this value for a larger pattern
    int size = 2 * n - 1;
    
    for (i = 0; i < size; i++) {
        for ( j = 0; j < size; j++) {
            int min = i;
            if (j < min) min = j;
            if (size - 1 - i < min) min = size - 1 - i;
            if (size - 1 - j < min) min = size - 1 - j;
            printf("%d ", n - min);
        }
        printf("\n");
    }
    
    return 0;
}

