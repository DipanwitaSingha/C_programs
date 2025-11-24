#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char words[20][50];
    int i = 0, w = 0, c = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0') {
        if (sentence[i] == ' ' || sentence[i] == '\n') {
            if (c > 0) {   // end of a word
                words[w][c] = '\0';
                w++;
                c = 0;
            }
        } else {
            words[w][c++] = sentence[i];
        }
        i++;
    }

    printf("Words:\n");
    for (i = 0; i < w; i++)
        printf("%s\n", words[i]);

    return 0;
}

