#include<stdio.h>
#include<string.h>
void main()
{
 char gendercheck[10]={"male"},gendercheck1[10]={"female"},gendercheck2[10]={"Male"},gendercheck3[10]={"Female"};
 int i,j;
 struct class
 {
  char class_name[10];
  struct student
  {
   char student_name[20],gender[10];
   int *roll,age;
   struct result
   {
    char subject[15];
    int marks;
    float percentage;
   }res[2];
  }stu[2];
 };
 struct class *ptr;
 struct class cls;
 ptr=&cls;
 printf("Enter Class:");
 gets(cls.class_name);
 for(i=0;i<2;i++)
 {
  printf("Enter student name:");
  gets(cls.stu[i].student_name);
  printf("Student gender:");
  gets(cls.stu[i].gender);
  printf("Student age:");
  scanf("%d",&cls.stu[i].age);
  printf("Enter student roll number:");
  scanf("%d",&cls.stu[i].roll);
  for(j=0;j<2;j++)
  {
   printf("Enter subject name:");
   while((getchar())!='\n');
   gets(cls.stu[i].res[j].subject);
   printf("Marks in %s:",cls.stu[i].res[j].subject);
   scanf("%d",&cls.stu[i].res[j].marks);
  }
  while((getchar())!='\n');
  printf("\n");
 printf("Enter percentage of %s:",cls.stu[i].student_name);
  scanf("%f",&cls.stu[i].res[j].percentage);
 }
 printf("\n\n");
 printf("Details of the students from class %s\n\n",ptr->class_name);
 for(i=0;i<2;i++)
 {
  if(strcmp(cls.stu[i].gender,gendercheck)==0||strcmp(cls.stu[i].gender,gendercheck2)==0)
  {
   printf("Student %d Name:%s\nstudent Gender:%s\nHis Age:%d\nHis Roll number:%d\n",i+1,ptr->stu[i].student_name,ptr->stu[i].gender,ptr->stu[i].age,ptr->stu[i].roll);
   for(j=0;j<2;j++)
   {
    printf("His Marks in %s:%d\n",ptr->stu[i].res[j].subject,ptr->stu[i].res[j].marks);
   }
   printf("His Percentage:%f\n",ptr->stu[i].res[j].percentage);
   printf("\n");
  }
  else if(strcmp(cls.stu[i].gender,gendercheck1)==0||strcmp(cls.stu[i].gender,gendercheck3)==0)
  {
   printf("Student %d Name:%s\nstudent Gender:%s\nHer Age:%d\nHer Roll number:%d\n",i+1,ptr->stu[i].student_name,ptr->stu[i].gender,ptr->stu[i].age,ptr->stu[i].roll);
   for(j=0;j<2;j++)
   {
    printf("Her in %s:%d\n",ptr->stu[i].res[j].subject,ptr->stu[i].res[j].marks);
   }
   printf("Her Percentage:%f\n",ptr->stu[i].res[j].percentage);
  }
   printf("\n");
 }
}
