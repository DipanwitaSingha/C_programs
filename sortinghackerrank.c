#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1?? Lexicographic (dictionary order)
int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b);
}

// 2?? Reverse lexicographic order
int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b, a);
}

// Helper: count distinct characters in a string
int distinct_char_count(const char* s) {
    int freq[128] = {0};
    int count = 0;
    for ( i = 0; s[i]; i++) {
        if (!freq[(int)s[i]]) {
            freq[(int)s[i]] = 1;
            count++;
        }
    }
    return count;
}

// 3?? Sort by number of distinct characters (tie-break: lexicographic)
int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int da = distinct_char_count(a);
    int db = distinct_char_count(b);

    if (da == db)
        return lexicographic_sort(a, b);
    return da - db;
}

// 4?? Sort by length (tie-break: lexicographic)
int sort_by_length(const char* a, const char* b) {
    int la = strlen(a);
    int lb = strlen(b);
    if (la == lb)
        return lexicographic_sort(a, b);
    return la - lb;
}

// 5?? Generic string sort using function pointer
void string_sort(char** arr, const int len, int (*cmp_func)(const char*, const char*)) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (cmp_func(arr[i], arr[j]) > 0) {
                char* temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// 6?? Main
int main() {
    int n;
    scanf("%d", &n);
  
    char** arr = (char**)malloc(n * sizeof(char*));
  
    for (int i = 0; i < n; i++) {
        arr[i] = malloc(1024 * sizeof(char));
        scanf("%s", arr[i]);
        arr[i] = realloc(arr[i], strlen(arr[i]) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    for (int i = 0; i < n; i++)
        free(arr[i]);
    free(arr);

    return 0;
}

