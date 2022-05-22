#include<stdio.h>
struct stu
{
	int a;
	char b[10];
	short int c[2];
	float d;
}stu1;
int main()
{
printf("%d",sizeof(struct stu));
}