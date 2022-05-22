#include "all_header.h"
//extern int armstrong();
int main()
{
	int a,b,len,len1,c;
	char arr1[50]="good world";
	char arr2[50]="good c_prog";
	a=strcmp(arr1,arr2);
	printf("string compare output=%d\n",a);
	strcpy(arr1,arr2);
	printf("string copy output=%s\n",arr1);
	strcat(arr1,arr2);
	printf("str cat op=%s\n",arr1);
	strrev(arr1);
	printf("str revop=%s\n",arr1);
	len=strlen(arr1);
	printf("str length op=%d\n",len);
    b=strncmp(arr1,arr2,2);
	printf("string compare output=%s\n%c\n%d\n",arr1,arr2,b);
	strrev(arr1);
	printf("str revop=%s\n",arr1);
	//len1=strnlen(arr1);
	printf("str length op=%d\n",len1);
	c=strstr(arr1,"prog");
	printf("%s\n%s\n",arr1,arr2);
	printf("strstr=%s\n",c);
	strncpy(arr1,arr2,3);
	printf("string copy output=%s\n",arr1);
	strncat(arr1,arr2,3);
	printf("str cat op=%s\n",arr1);
//	armstong();
	
}