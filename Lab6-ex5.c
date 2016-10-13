#include <stdio.h>  //added space between include and <stdio.h>
//#include <malloc.h> //added space between include and <malloc.h>

int main()
{
    char *a = "hey";
    //free( a ); can't use free because malloc was not used
    a = "hello";   
    printf("%s",a);
}
