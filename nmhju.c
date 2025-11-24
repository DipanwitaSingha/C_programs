#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
return strcmp(a,b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
return strcmp(b,a);
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int i,s;
    int count=0;
    for(i=0;i<n;i++)
    {
    	for (j=i+1;j<n;j++)
     {
    if a[i]>a[j]
        { 
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        }
    }
}


int sort_by_length(const char* a, const char* b) {
int da=distinct_char_count(a);
int db=distinct_char_count(b);
 if (da=db)
 return lexicographic_sort(a,b);
 return db-da;
 
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){

}


