#include <stdio.h>
#include<stdlib.h>

// Function to calculate the length of the string
int calculateLength(char*); // Function prototype

int main() 
{
   int l;
   char *str1;
     // Example initial size
     int size=50;
    str1 = (char *)malloc(size * sizeof(char));
   printf("\n\n Pointer : Calculate the length of the string :\n"); 
   printf("---------------------------------------------------\n");

   printf(" Input a string : ");
   fgets(str1, size, stdin); // Input the string from the user

   l = calculateLength(str1); // Get the length of the input string
   printf(" The length of the given string %s is : %d ", str1, l-1); // Display the length of the string
   printf("\n\n");
}

// Function to calculate the length of the string
int calculateLength(char* ch) // Takes a pointer to the first character of the string
{
   int ctr = 0;

   while (*ch != '\0') // Loop until the null character '\0' is found
   {
      ctr++; // Increment the counter for each character encountered
      ch++; // Move to the next character in the string
   }

   return ctr; // Return the total count of characters (excluding the null character)
}

