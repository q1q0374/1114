#include<stdio.h>
int a;
int b;//�������� �ʱⰪ 0 
int add()
{
	return a+b;
}
int main()
{
	int an;
	a=5;
	b=7;
	an=add();
	
	printf("%d+%d=%d",a,b,an);
	
	
}
