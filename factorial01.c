#include<stdio.h>
long fact(int cc)
{
	printf("factorial%d\n",cc);
	
	if(cc<=1)
	    return 1;
	else
	    return cc*fact(cc-1);
}


int main()
{
	int n=0;

	
	printf("정수를 입력");
	scanf("%d",&n);
	printf("%d!은 %d 입니다",n,fact(n));
	 
	
}

