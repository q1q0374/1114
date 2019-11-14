#include<stdio.h>
b=0;
void sub()
{
	static int scount=0;//전역변수로 이동 한번한 실행한다  밑에 sub(); 에서 처음만실행하고 나머진실행안함 
	int acount=0;
	
	printf("scount =%d\n",scount);
	printf("acount =%d\n",acount);
	printf("b=%d\n",b);
	acount++;
	scount++;
    b++;
}
int main()
{
	sub();
	
	sub();
	
	sub();
}
