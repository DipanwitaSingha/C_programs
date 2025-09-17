#include <stdio.h>
union car
{
    char name[50];
    int age;
};

// function prototype
union car getInformation();

int main()
{
    union car s;

    s = getInformation();

    printf("\nDisplaying information\n");
    printf("Name: %s", s.name);
    printf("\nRoll: %d", s.age);
    
    return 0;
}
union car getInformation() 
{
 union car s1;

  printf("Enter name: ");
  scanf ("%[^\n]%*c", s1.name);

  printf("Enter age: ");
  scanf("%d", &s1.age);
  
  return s1;
}	

