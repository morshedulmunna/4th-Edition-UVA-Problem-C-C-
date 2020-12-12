#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int k,x,y,h=0,r=0 ;
        scanf("%d",&k);

        for(int i=0; i<k; i++)
        {
            scanf("%d%d",&x,&y);
            if(x>y)
            {
                h++;
            }
            else if(x<y)
            {
                r++;
            }
        }
        if(h>r)
        {
            printf("Harry will marry Granger\n");
        }
        else if(h<r)
        {
            printf("Ron will marry Granger\n");
        }
        else
        {
            printf("It is a Draw\n");
        }
    }
    return 0;
}
