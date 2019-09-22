#include<stdio.h>
void main()
{
    char c[30],count;
    scanf("%s",c);
    for(char i=97;i<=97+25;i++)
    {

        count=0;
        for(char j=0;j<=30;j++)
        {
            if(c[j]==i)
            {
               count++;

            }

        }

    }
    if(count==0)
        printf("\nGiven String is not a PANAGRAM");

    else
        printf("\nGiven string is a PANAGRAM");
}
