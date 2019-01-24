#include<stdio.h>
#include<stdarg.h>

void printVar(int count, ...)
{
	va_list args;
	va_start(args, count);
	for(int i = 0; i < count; i++)
	{
		printf("value:%d\n",va_arg(args, int));
	}
	va_end(args);
}
int main(int argc,char **argv)
{
	int ret = 0;
	printVar(4, 5, 6, 7, 8);
	return ret;
}
