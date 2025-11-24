#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books;
int i;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages;

int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);

    // Allocate memory for total books on each shelf
    total_number_of_books = (int*)calloc(total_number_of_shelves, sizeof(int));
    total_number_of_pages = (int**)malloc(total_number_of_shelves * sizeof(int*));

    for ( i = 0; i < total_number_of_shelves; i++) {
        total_number_of_pages[i] = NULL;  // initialize to NULL
    }

    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);

    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);

        if (type_of_query == 1) {
            // Query type 1: Add a book to shelf x with y pages
            int x, y;
            scanf("%d %d", &x, &y);

            total_number_of_books[x]++;  // increase book count
            total_number_of_pages[x] = realloc(total_number_of_pages[x], total_number_of_books[x] * sizeof(int));
            total_number_of_pages[x][total_number_of_books[x] - 1] = y;
        } 
        else if (type_of_query == 2) {
            // Query type 2: Print the number of pages in the y-th book on the x-th shelf
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", total_number_of_pages[x][y]);
        } 
        else if (type_of_query == 3) {
            // Query type 3: Print the number of books on the x-th shelf
            int x;
            scanf("%d", &x);
            printf("%d\n", total_number_of_books[x]);
        }
    }

    // Free allocated memory
    for ( i = 0; i < total_number_of_shelves; i++) {
        free(total_number_of_pages[i]);
    }
    free(total_number_of_pages);
    free(total_number_of_books);

    return 0;
}

