#include <stdio.h>
#include<string.h>
int main() {
    FILE *fp = fopen("C://file//output1.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    char line[200];
    int i;

    for (i = 0; i < 5; i++) {
        if (fgets(line, sizeof(line), fp) != NULL) {
        	if(strlen(line)>10)
            printf("Line %d: %s", i + 1, line);
        } else {
            printf("End of file reached.\n");
            break;
        }
    }

    fclose(fp);
    return 0;
}


