#include<stdio.h>
#include<string.h>
int main()
{
    int i=0;
    char arr1[ 20 ] = "Trumantiger";    //instead of size 15, I changed it to size 20
    char arr2[ 20 ];
    while(i<19){
        arr2[ i ] = 'A';
        ++i;
    }
    arr2[19] = '\0';    //strcpy expects a Null terminator
    strcpy( arr1 , arr2 ); //For this to work, arr1 >= arr2
    
    printf("%s",arr1);
    
   return 0;
}
