#include<stdio.h>
void inc(int cou);
int main()
{
   int i;
   
   i=10;
   printf("�� i=%d\n",i);
   
   inc(i);
   printf("�� i=%d\n",i);
   
}
void inc(int cou)
{
	cou++;
}
