#include<stdio.h>

void f2c();
void f0c();

int main(){
	printf("Hello world\n");
	f2c();
	printf("\n\n\n");
	f0c();
	return 0;
}

void f2c()
{
	int i;
	float c;
	for(i=0;i<=300;i=i+20)
	{
		c=5.0/9.0*(i-32);
		printf("%.1f\n",c);
	}
}

void f0c()
{
	int i=0;
	float c;
	while(i<=300)
	{	
		c=5.0/9*(i-32);
		printf("%.1f\n",c);
		i+=20;
	}
}
