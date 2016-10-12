#include <stdio.h>
 
int main()
{
    char* fileName;
    printf("Specify file name you would like to print to: \n");
    scanf("%s",fileName);
 

    FILE* file1 = fopen(fileName, "a+");
 
/*
    char c;
    while ((c=getchar()) != EOF)        This doesn't work because scanf gets all the characters
    {
        fprintf(file1,"%c", c);
    }
*/
    
    fprintf(file1, "%s", fileName);     //This prints the filename to the file.

 
    fclose(file1);
 
    printf("CTRL+d is a correct ending");
 
    return 0;
}
