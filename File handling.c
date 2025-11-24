#include<stdio.h>
int main()
{
   FILE *aeowl;
	char s1[]={"We are learning file handling today.\n"};
	//char s2="we need to know more  about C.\n";
	//char s3="C is the mother language of all the other languages.\n";
    aeowl= fopen("C:\\file\\output.txt", "w");

    if (aeowl== NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fputs(s1, aeowl);
    //fputs(s2, aeowl);
    //fputs(s3, aeowl);

    fclose(aeowl);
    printf("Strings written to file successfully.\n");

    return 0;
}
