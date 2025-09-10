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
struct student student1;
student1.roll=2;
strcpy(student1.name,"XYZ");
student1.marks=89.0;
printf("%d\n",student1.roll);
printf("%s\n",student1.name);
printf("%lf",student1.marks);
}
