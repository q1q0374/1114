#include<stdio.h>
void out(void);
int sum=1;
int main()
{
	int sum=0;
	printf("sum=%d\n",sum);
	out();
}
void out(void)
{
	printf("sum=%d",sum);
}
