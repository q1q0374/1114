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

	
	printf("������ �Է�");
	scanf("%d",&n);
	printf("%d!�� %d �Դϴ�",n,fact(n));
	 
	
}

