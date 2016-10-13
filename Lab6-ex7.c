#include<stdio.h>
int main()
{
	int x=1309;
	int *p = &x; //Changed from pointing to NULL to pointing to &x
	printf("\n The value of x is = %d",x);
	printf("\n The pointer points to the value = %d",*p);//segfault was happening here because p pointed to NULL
	return 1;
}
