#include<string.h>
#include<stdarg.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int checkID(char* inp){

		if(isdigit(*inp)){
		       return 999;
		}
        else{
		  while(*inp != '\0'){
			 if(*inp=='_' || isalpha(*inp) || isdigit(*inp))
			 inp++;
			 else
			 return 999;
		}
    }
return 1;
}


int main(int argc, char* argv[])
{
	int i;
	i = checkID(argv[1]);
	if(i == 1)
		printf("This Is An Identifier.");
	else
		printf("This Is Not An Identifier.");
return 0;
}


