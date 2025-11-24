#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline if present
    sentence[strcspn(sentence, "\n")] = '\0';

    char *word = strtok(sentence, " ");  // split by space

    printf("Words:\n");
    while (word != NULL) {
        printf("%s\n", word);
        //word = strtok(NULL, " ");
    }

    return 0;
}

