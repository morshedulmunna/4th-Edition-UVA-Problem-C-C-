#include <stdio.h>
#include <string.h>
int main()
{
    char c[1000];
    FILE *fptr;
    if ((fptr = fopen("string.txt", "r")) == NULL)
    {
        printf("Error! File Not Opeing");
    }
    while (fscanf(fptr, "%s", c) != EOF)
    {
        strrev(c);
        printf("%s\n", c);

        /* All file Woring Here*/
    }
    fclose(fptr);
    return 0;
}
