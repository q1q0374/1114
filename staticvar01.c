#include<stdio.h>
b=0;
void sub()
{
	static int scount=0;//���������� �̵� �ѹ��� �����Ѵ�  �ؿ� sub(); ���� ó���������ϰ� ������������� 
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
