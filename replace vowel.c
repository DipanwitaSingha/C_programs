#include <string.h>
#include <stdio.h>
int main() {

  char line[20],a[20];
  int k=0,i;


  // get full line of string input
  printf("Enter a line of string:");
  fgets(line, sizeof(line), stdin);
  line[strcspn(line, "\n")] = '\0';
  // loop through each character of the string
  for ( i = 0; line[i] != '\0'; i++) 
  {
  	//printf("%d\n",line[i]-'a'+1);
  	if(line[i]=='a' || line[i]=='e'|| line[i]=='i'|| line[i]=='o'|| line[i]=='u')
  	{
  		//a[k]='0'+line[i]-'a'+1;
  		//k++;
  		printf("%d",line[i]-'a'+1);
	  }
	  else if(line[i]=='A' || line[i]=='E'|| line[i]=='I'|| line[i]=='O'|| line[i]=='U')
  	{
  		//a[k]='0'+line[i]-'a'+1;
  		//k++;
  		printf("%d",line[i]-'A'+1);
	  }
	  else
	  {
	  //a[k]=line[i];
	  //k++;
	  printf("%c",line[i]);
}
  	
  }
  //a[k]='\0';
  //printf("%s\n",a);
  return 0;
  
}
