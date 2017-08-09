/*
This lesson is to convert temperature from fahrenheit to celsius and vice versa.
There are 3 parts: 
i.	fahrenheit to celsius
ii.	celsius to fahrenheit
iii.	User input

Technique that can be learned:
1.	function
2.	input and output cmd
3.	right justify 
4.	switch case
5.	for and while loop
*/

#include<stdio.h>

void f2c();
void c2f();
void ui();

int main(){
	printf("Temperature conversion °F->°C\n");
	f2c();
	printf("\n\nTemperature conversion °C->°F\n");
	c2f();
	printf("\n\nUser selection section\n");
	ui();
	return 0;
}

void f2c()
{
	float f;
	float c;
	printf("%s\t%s\n","fahrenheit/°F","celsius/°C");
	for(f=-60;f<=300;f=f+20)
	{
		c=5.0/9.0*(f-32);
		printf("%6.1f\t\t%6.1f\n",f,c);
	}
}

void c2f()
{
	float f;
	float c=-60;
	printf("%s\t%s\n","celsius/°C","fahrenheit/°F");
	while(c<=300)
	{	
		f=c*9.0/5.0+32;
		printf("%6.1f\t\t%6.1f\n",c,f);
		c+=20;
	}
}

void ui()
{
	char input;
	float value,output;
	printf("1. Enter 'f' for convertion from °C -> °F\n");
	printf("2. Enter 'c' for convertion from °F -> °C \n");
	input=getchar();
	
	printf("\nEnter value:\t");
	scanf("%f",&value);	
	
	switch(input){
		case 'c':
			output=5.0/9.0*(value-32);
			printf("%s\t\t%s\n","°F","°C");
			printf("%.1f\t\t%.1f\n",value,output);
		break;

		case 'f':
			output=value*9.0/5.0+32;
			printf("%s\t\t%s\n","°C","°F");
			printf("%.1f\t\t%.1f\n",value,output);
		break;

		default:
			printf("Invalid convertion!!!\n");		
	}
}	
