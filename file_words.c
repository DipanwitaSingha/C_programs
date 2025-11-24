#include <stdio.h>
#include <string.h>

void words(char sentence[])
{
    char words[20][50];
    int i = 0, w = 0, c = 0;

    while (sentence[i] != '\0')
    {
        if (sentence[i] == ' ' || sentence[i] == '\n')
        {
            if (c > 0)       // end of a word
            {
                words[w][c] = '\0';
                w++;
                c = 0;
            }
        }
        else
        {
            words[w][c++] = sentence[i];
        }
        i++;
    }

    // If last word doesn't end with space or newline
    if (c > 0)
    {
        words[w][c] = '\0';
        w++;
    }

    // Print words
    for (i = 0; i < w; i++)
    {
	    //if (strlen(words[i])>4)
        printf("%s %d\n", words[i],strlen(words[i]));
    }
}

int main()
{
    FILE *fp = fopen("C://file//output1.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    char line[200];

    while (1)     // same logic as while(true)
    {
        if (fgets(line, sizeof(line), fp) != NULL)
        {
            words(line);
        }
        else
        {
            printf("End of file reached.");
            break;
        }
    }

    fclose(fp);
    return 0;
}

