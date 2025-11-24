#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n;
    float *element; // Pointer to float type to store elements

    printf("\n\n Pointer : Find the largest element using Dynamic Memory Allocation :\n");
    printf("-------------------------------------------------------------------------\n");

    // Input the total number of elements
    printf(" Input total number of elements (1 to 100): ");
    scanf("%d", &n);

    element = (float *)calloc(n, sizeof(float)); // Allocate memory for 'n' elements

    if (element == NULL) {
        printf(" No memory is allocated."); // If memory allocation fails
        exit(0);
    }

    printf("\n");

    // Input 'n' numbers and store them dynamically in the allocated memory
    for (i = 0; i < n; ++i) {
        printf(" Number %d: ", i + 1);
        scanf("%f", element + i);
    }
float max;
max=*element;
    // Find the largest element among the 'n' elements
    for (i = 1; i < n; ++i) {
        if (max < *(element + i)) {
            max = *(element + i); // Store the largest element in the first memory location
        }
    }
float min;
min=*element;
for (i = 1; i < n; ++i) {
        if (min > *(element + i)) {
            min = *(element + i); // Store the largest element in the first memory location
        }
    }

    printf(" The Largest element is :  %.2f \n\n", max);
	printf("The smallest element is : %.2f\n\n",min);
    return 0;
}

