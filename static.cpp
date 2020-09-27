#include<stdio.h>
#include<conio.h>
void increment();
int main()
{
	back:
		increment();
		getch();
		goto back;
		return 0;
}
void increment()
{
	static int x=1;
	printf("x:=%d\n",x);
	x++;
	
}
