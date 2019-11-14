#include<stdio.h>
void inc(int cou);
int main()
{
   int i;
   
   i=10;
   printf("Àü i=%d\n",i);
   
   inc(i);
   printf("ÈÄ i=%d\n",i);
   
}
void inc(int cou)
{
	cou++;
}
