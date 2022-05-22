int main()
{
	int x,y,z;
	scanf("%d%d",&x,&y);
	z=add(x,y);
	printf("sum=%d\n",z);
	z=sub(x,y);
	printf("sub=%d\n",z);
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int sub(int a,int b)
{
	int c;
	c=a-b;
	return c;
}