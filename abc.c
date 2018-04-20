#include<stdio.h>
int main(void)
{
	int i,a = 1;
	int b = 2;
	int c = 0;
	int n=100;
	c = a + b;
	for(i=0;i<n;i++)
		c += i;
	//This is for debug
	for(i=0;i<n;i++)
		b+=i;
	return 0;
}

