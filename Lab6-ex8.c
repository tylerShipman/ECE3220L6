#include<stdio.h>
#include<string.h>
#include<stdlib.h> //needed for malloc function
//#include<malloc.h>
int main(void)
{
	char *s, *dyn_s;
	int ln;
	printf("Enter the input string\n");
	scanf("%s",s);
	ln = strlen(s);
	dyn_s = (char*)malloc(strlen(s)+1);	// removed * from front
	dyn_s = s;
	dyn_s[strlen(s)]='\0';
	printf("%s", dyn_s);	//added %s
	return 0;
}

