#include<stdio.h>
int main()
{
int i,a=10;
char b[6];
float c[3];
double d[9];
short int arr[5]={18,2,5,77,4};
int *ptr=NULL;
int *p=NULL;
int *ptr1=NULL;
int *ptr2=NULL;
int *ptr3=NULL;
p=&a;
ptr=&arr;
ptr1=&b;
ptr2=&c;
ptr3=&d;
printf("int size=%d\n",p);
for(i=0;i<6;i++)
{
	printf("char sizeb[%d]=%d\n",i,ptr1[i]);
}
for(i=0;i<3;i++)
{
	printf("float size[%d]=%d\n",i,&c[i]);
}
for(i=0;i<9;i++)
{
	printf("double size[%d]=%d\n",i,&d[i]);
}
for(i=0;i<5;i++)
{
	printf("short int arr[%d]=%d\n",i,&arr[i]);
}
for(i=0;i<5;i++)
{
	printf("ptr short int[%d]=%d\n",i,ptr[i]);
}
}