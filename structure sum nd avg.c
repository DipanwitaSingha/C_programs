#include<stdio.h>
#include<string.h>
struct student
{
	int roll;
	char name[10];
	int m1,m2,m3,m4,m5,total;
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
 printf("Marks1: ");
 scanf("%d",&student1[i].m1);
 scanf("%d",&student1[i].m2);
 scanf("%d",&student1[i].m3);
 scanf("%d",&student1[i].m4);
 scanf("%d",&student1[i].m5);
 student1[i].total=student1[i].m1+student1[i].m2+student1[i].m3+student1[i].m4+student1[i].m5;
}
 printf("\n--- Student Details---\n");
 for(i=0;i<n;i++)
 {
 	printf("Roll: %d\n",student1[i].roll);
 	printf("Name: %s\n",student1[i].name);
 	printf("Marks: %d\n\n",student1[i].total);
 	printf("Avg: %d\n\n",student1[i].total/5);
 	
 }
return 0;
}
