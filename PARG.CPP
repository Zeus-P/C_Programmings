#include<iostream.h>
#include<string.h>
#include<stdarg.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int checkID(char* inp){

		if(isdigit(*inp)){
		       //	printf("This Is Not An Identifier.\n");
			return 999;
		}
		inp++;
		while(*inp != '\0'){
			 if(*inp=='_' || isalpha(*inp))
			 inp++;
			 else
			 return 999;
		}
return 1;
}


int main(int argc, ...)
{
	int i;
	char* inp;
	va_list ap;
	va_start(ap,argc);
	inp=va_arg(ap,char*);

	i = checkID(inp);
	if(i == 1)
		printf("This Is An Identifier.");
	else
		printf("This Is Not An Identifier.");
return 0;
}


