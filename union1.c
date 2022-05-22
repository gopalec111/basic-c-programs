#include<stdio.h>
#include<string.h>
#pragma pack (1)
int main()
{
	int i,j;
	struct shop
	{
		char name[20];
		union items
		{
			struct books
			{
				char title[20],author[20];
				int pages;
				float price1;
			}book[2];
			struct shirts
			{
				char color[20];
				int size;
				float price;
			}shirt[2];
		}item;
	};
	struct shop obj;
	printf("name of the shop\n");
	gets(obj.name);
	for(i=0;i<2;i++)
	{
		printf("Enter Book title\n");
		gets(obj.item.book[i].title);
		printf("Author of %s\n",obj.item.book[i].title);
		gets(obj.item.book[i].author);
		printf("No.of pages in %s\n",obj.item.book[i].title);
		scanf("%d",&obj.item.book[i].pages);
		printf("Price of %s\n",obj.item.book[i].title);
		scanf("%f",&obj.item.book[i].price1);
		while((getchar())!='\n');
	}
	for(j=0;j<2;j++)
	{
		printf("Enter Color of Shirt\n");
		gets(obj.item.shirt[j].color);
		printf("Size of the selected %s Shirt\n",obj.item.shirt[j].color);
		scanf("%d",&obj.item.shirt[j].size);
		printf("Price of the selected %s Shirt\n",obj.item.shirt[j].color);
		scanf("%f",&obj.item.shirt[j].price);
		while((getchar())!='\n');
	}
	printf("\n");
	printf("*****************Gopal Mall******************");
	printf("\n");
	printf("Below are the Items You selected from the shop\n\n");
	for(i=0;i<2;i++)
	{
		printf("name of the shop %s\nName of the Book%s\nAuthor of %s:%s\nPages in %s:%d\nPrice of %s:%f\n",obj.name,obj.item.book[i].title,obj.item.book[i].title,obj.item.book[i].author,obj.item.book[i].title,obj.item.book[i].pages,obj.item.book[i].title,obj.item.book[i].price1);

printf("\n");
}
	for(j=0;j<2;j++)
	{
		printf("enter colour of shirt:%s\nSize of the selected %s Shirt:%d\nPrice of the selected %s Shirt:%f\n",obj.item.shirt[j].color,obj.item.shirt[j].color,obj.item.shirt[j].size,obj.item.shirt[j].color,obj.item.shirt[j].price);

printf("\n");
}
}
