#include<stdio.h>
void digital(int k)
{

    switch(k)
    {

        case 1: printf("\n");
                printf("  |\n");
                printf("  |\n");
                break;
        case 2: printf(" __\n");
                printf(" __|\n");
                printf("|__\n");

                break;
        case 3: printf(" _\n");
                printf(" _|\n");
                printf(" _|\n");

                break;
        case 4: printf("|\n");
                printf("|_|_\n");
                printf("  |\n");
                break;
         case 5:printf(" __\n");
                printf("|__\n");
                printf(" __|\n");

                break;
         case 6:printf(" __\n");
                printf("|__\n");
                printf("|__|\n");

                break;
         case 7:printf(" __\n");
                printf("   |\n");
                printf("   | \n");
                break;
         case 8:printf(" __\n");
                printf("|__|\n");
                printf("|__| \n");
                break;
        case 9: printf(" __\n");
                printf("|__|\n");
                printf(" __| \n");
                break;
        case 0: printf(" __\n");
                printf("|  |\n");
                printf("|__| \n");
                break;




    }
}

void main()
{
  int mod,n,reverse=0,m;
  scanf("%d",&n);
  while(n!=0)
  {
      mod=n%10;
      reverse=reverse*10+mod;
      n/=10;
 }
 while(reverse!=0)
 {
    m=reverse%10;
    digital(m);
    reverse=reverse/10;

 }
}

