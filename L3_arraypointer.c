/*
Example of array and pointer

 *ptr  	 is a pointer  name[] == *ptr
  x  	 is a variable
name[10] is an array

ptr = &x is pointer point to the address of x
  x = *ptr is x has the pointer value

ptr=&name[0]=name

value: 		ptr[i] = *(ptr+i) =  name[i] = *(name+i)
reference:		   ptr+i  = &name[i] =  (name+i) 

Example
Declaring a void pointer ->  void *ptr
***void pointer can be used to point to any data type

type casting use for dereference
int value
char string
void *ptr

ptr=&value;
*(int*)ptr
ptr=&string;
*(char*)ptr 

In this lesson, we can learn:
1. Array and pointer relationship which can be interchange.
2. void pointer
3. Create similar DIY strlen() and memset() built in function.
*/

#include<stdio.h>
#include<string.h>

int strlenDIY(char *s)
{
	int count;
	for(count=0;*s!='\0';s++)
		count++;
	return count;	
}

void memsetDIY(void *str, int c, size_t n)
{
	int i;
	//char *s=str;
	for(i=0;i<n;i++)
		*(char*)(str++)=c; //*s++=c;
		
}

void setMemory()
{
	/*for(i=0;i<20;i++)
		name[i]='\0';
	*/
}

int main(int argc, char* argv[])
{
	char *ptr;
	char name[20];
	int i;	
	
	memsetDIY(name,0,20);
	printf("DIY \t\t%s\n",name);

	memset(name,0,20);
	printf("Original \t%s\n",name);

	scanf("%[^\n]",name);

	ptr=&name[0]; // ptr=name 

	for(i=0;i<20;i++)
	{
		printf("%c",ptr[i]); // name[i], *(name+i), *(ptr+i)  
	}

	printf("\n%d\n",strlenDIY(ptr));

	return 0;
}
