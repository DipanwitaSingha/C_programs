#include <stdio.h>

int main() {
  
    // Create and Initialize the 
    // 3-dimensional array
    int arr[2][3][2] = { { { 1, 1 }, { 2, 3 }, 
                       { 4, 5 } }, { { 6, 7 }, 
                       { 8, 9 }, { 10, 11 } } };

  	// Loop through the depth
    for ( i = 0; i < 2; ++i) {
      
      	// Loop through the 
      	// rows of each depth
        for (int j = 0; j < 3; ++j) {
          
          	// Loop through the 
          	// columns of each row
            for (int k = 0; k < 2; ++k)
                printf("arr[%i][%i][%i] = %d   ", i, j, k,
                       arr[i][j][k]);
          	printf("\n");
        }
      printf("\n\n");
    }
    return 0;
}
