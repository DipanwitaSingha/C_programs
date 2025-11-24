#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("C://file//output1.txt", "r");
    if (fp == NULL) {
        printf("Error!\n");
        return 1;
    }

    char lines[5][200];
    int i = 0;
    int j=0; 
    while (i < 5 && fgets(lines[i], sizeof(lines[i]), fp)) {
        // Remove trailing newline
        lines[i][strcspn(lines[i], "\n")] = '\0';
        i++;
    }

    fclose(fp);

    printf("\nStored lines:\n");
    for (j = 0; j < i; j++) {
        printf("%s\n", lines[j]);
    }

    return 0;
}

