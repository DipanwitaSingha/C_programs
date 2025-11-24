#include <stdio.h>
#include <string.h>

int main() {
    FILE *filePointer;
    char strings[5][100];
    int i;

    filePointer = fopen("C://file//output1.txt", "w");
    if (filePointer == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter 5 lines:\n");

    // Clear leftover newline if necessary
    getchar();   // In case previous scanf left a '\n'

    for (i = 0; i < 5; i++) {
        fgets(strings[i], sizeof(strings[i]), stdin);

        // Remove newline character from fgets
        strings[i][strcspn(strings[i], "\n")] = '\0';

        fputs(strings[i], filePointer);
        fputs("\n", filePointer);
    }

    fclose(filePointer);
    printf("5 lines written to file successfully.\n");

    return 0;
}

