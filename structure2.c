#include<stdio.h>
#include<string.h>
struct student
{
	int roll;
	char name[10];
	double marks;
};
int main()
{
struct student student1[10];
int i,n;
printf("Enter the no of students:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("\nEnter details for student %d:\n",i+1);
	printf("Roll: ");
	scanf("%d",&student1[i].roll);
 printf("Name: ");
 scanf(" %[^\n]",student1[i].name);
 printf("Marks: ");
 scanf("%lf",&student1[i].marks);
}
 printf("\n--- Student Details---\n");
 for(i=0;i<n;i++)
 {
 	printf("Roll: %d\n",student1[i].roll);
 	printf("Name: %s\n",student1[i].name);
 	printf("Marks: %.2lf\n\n",student1[i].marks);
 }
return 0;
}
