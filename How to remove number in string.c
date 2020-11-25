#include<stdio.h>
int main()
{
    char s[1000];
    gets(s);
    int i;
    int n=strlen(s);
    int count=0;
    for(i=0; i<n; i++)
    {
        if(s[i]>='0' && s[i]<='9') count++;
    }
    printf("Total Numbers: %d\n",count);

    printf("The string removing numbers:");

    for(i=0; i<n; i++)
    {
        if( (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || s[i]==' ')
        {
            printf("%c",s[i]);
        }
    }
    return 0;
}
