#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    while (scanf("%s", s) != EOF)
    {
        int len = strlen(s), i, j;
        char a[] = "A   3  HIL JM O   2TUVWXY5";
        char b[] = "01SE Z  8 ";

        int check1 = 0, check2 = 0;

        for (i = 0, j = len - 1; i <= j; i++, j--)
        {
            if (s[i] != s[j])
                check1 = 1;

            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                if (s[j] != a[s[i] - 'A'])
                    check2 = 1;
            }
            else
            {
                if (s[j] != b[s[i] - '0'])
                    check2 = 1;
            }
        }
        if (check1)
        {
            if (check2)
                puts("This is not a palindrome.");
            else
                puts("This is a mirrored string.");
        }
        else
        {
            if (check2)
                puts("This is a regular palindrome.");
            else
                puts("This is a mirrored palindrome.");
        }
        puts("");
    }
    return 0;
}
