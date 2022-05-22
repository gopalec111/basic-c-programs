#include<stdio.h>
#include<string.h>
	int main()
	{
		union shops
	{
		struct books
		{
			char name[20],writer[15];
			int pages,price;
		}book;
		struct shirts
		{
			char brand[20],colour[20];
			float price1;
		}shirt;
	};
	 union shops shop;
	 //struct books book={"c indepth","srivastava",600,300};
	 //struct shirts shirt={"cool colurs","pink",209.99};
     printf("enter a book name\n");
	 gets(shop.book.name);
	 printf("enter writer name\n");
	 gets(shop.book.writer);
	 printf("%s book enter pages\nenter price of %s book",shop.book.name,shop.book.name);
	 scanf("%d%d",&shop.book.pages,&shop.book.price);
     printf("book name=%s\nwriter of %s book=%s\npages of %s book=%d\nprice of %s book=%d\n",shop.book.name,shop.book.name,shop.book.writer,shop.book.name,shop.book.pages,shop.book.name,shop.book.price);
	printf("\nwelcome to shirts shop\n");
	 printf("which type of brand and colour do u want\n");
	 gets(shop.shirt.brand);
	 //printf("\n");
	 gets(shop.shirt.colour);
	 printf("enter price of selected shirt\n");
	 scanf("%f",&shop.shirt.price1);
	 printf("your brand is %s\nand your shirt colour is %s\nprice is %f\n",shop.shirt.brand,shop.shirt.colour,shop.shirt.price1);
	}