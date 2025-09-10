#include <stdio.h>

void printBoundary(int a[4][4], int m, int n) 
 {
 int i,j;

    for (i = 0; i < m; i++) {
        for ( j = 0; j < n; j++) {
            if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
                printf("%d ", a[i][j]);
            else
                printf("  "); // Two spaces for inner empty elements
        }
        printf("\n");
    }
}

// Driver code
int main() {
    int a[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {1, 2, 3, 4},
        {5, 6, 7, 8}
    };
    printBoundary(a, 4, 4);
    return 0;
}
