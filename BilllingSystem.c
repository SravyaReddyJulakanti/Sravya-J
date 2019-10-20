#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

struct product
{
     int id;
     char  name[30];
     int price;
     int quantity;
};
struct billing
{
    int id,quantity;
}b[20];
void main()
{
    char username[20],username1[20],password[20],password1[20],newusername[20],newpassword[20];
    strcpy(username,"Gokaraju");
    strcpy(password,"Suntek");
    int i,usecase,adminchoice,uorp,id,price,stockupdate,discount=15,newdiscount,pcount,total=0,billno=101,subtotal,bachoice;
    struct product p[50];
    time_t now;
	struct tm *tm_now;
	int  hours,mins,seconds;
	SYSTEMTIME stime;
	GetSystemTime(&stime);
	now=time(NULL);
	tm_now=localtime(&now);
	hours=tm_now->tm_hour;
	mins=tm_now->tm_min;
	seconds=tm_now->tm_sec;
    p[0].id=1;
    strcpy(p[0].name, "Sugar");
    p[0].price = 86;
    p[0].quantity=5;
    p[1].id=2;
    strcpy(p[1].name, "Coffee");
    p[1].price = 90;
    p[1].quantity=10;
    p[2].id=3;
    strcpy(p[2].name, "Tea");
    p[2].price = 81;
    p[2].quantity=8;
    p[3].id=4;
    strcpy(p[3].name, "Red Chilli");
    p[3].price = 89;
    p[3].quantity=8;
    p[4].id=5;
    strcpy(p[4].name, "Lays");
    p[4].price = 20;
    p[4].quantity=9;
    p[5].id=6;
    strcpy(p[5].name, "Tamerind");
    p[5].price = 32;
    p[5].quantity=8;
    p[6].id=7;
    strcpy(p[6].name, "Almonds");
    p[6].price = 45;
    p[6].quantity=8;
    p[7].id=8;
    strcpy(p[7].name, "Dry Fruits");
    p[7].price = 54;
    p[7].quantity=10;
    p[8].id=9;
    strcpy(p[8].name, "Sunflower Oil");
    p[8].price = 100;
    p[8].quantity=15;
    p[9].id=10;
    strcpy(p[9].name, "dairyMIlk");
    p[9].price = 120;
    p[9].quantity=9;
    p[10].id=11;
    strcpy(p[10].name, "Boost");
    p[10].price = 250;
    p[10].quantity=4;
    p[11].id=12;
    strcpy(p[11].name, "Milk");
    p[11].price = 30;
    p[11].quantity=8;
    p[12].id=13;
    strcpy(p[12].name, "Yogurt");
    p[12].price = 50;
    p[12].quantity=3;
    p[13].id=14;
    strcpy(p[13].name, "Horlicks");
    p[13].price = 390;
    p[13].quantity=4;
    p[14].id=15;
    strcpy(p[14].name, "Little Hearts");
    p[14].price = 20;
    p[14].quantity=20;
    p[15].id=16;
    strcpy(p[15].name, "Mangoes");
    p[15].quantity=4;
    p[15].price = 90;
    p[15].quantity=8;
    p[16].id=17;
    strcpy(p[16].name, "Water Melon");
    p[16].price = 40;
    p[16].quantity=7;
    p[17].id=18;
    strcpy(p[17].name, "Rice");
    p[17].price = 500;
    p[17].quantity=6;
    p[18].id=19;
    strcpy(p[18].name, "Salt");
    p[18].price = 36;
    p[18].quantity=3;
    p[19].id=20;
    strcpy(p[19].name, "Drinks");
    p[19].price = 250;
    p[19].quantity=9;
    l1:
    {
        printf("\n            Welcome to Shravya stores!!! ");
        printf("\nLogin as:\n \n1.Admin\n2.Billing Agent\n");
        scanf("%d",&usecase);
        switch(usecase)
        {
            case 1: printf("\nKindly Enter the Username\n\n");
                    scanf("%s",username1);
                    printf("\nKindly Enter Password\n\n");
                    scanf("%s",password1);
                    if(strcmp(username,username1)==0 && strcmp(password,password1)==0)
                    {
                        while(1)
                        {
                            printf("\n1. Update username/password\n");
                            printf("2. Update cost	\n");
                            printf("3. Update stock \n");
                            printf("4. Update Discount Percentage	\n");
                            printf("5. Display Product Information\n");
                            printf("6. Logout\n");
                            scanf("%d",&adminchoice);
                            switch(adminchoice)
                            {
                                case 1:
                                {
                                    printf("\nUpdate 1. Username or 2. Password\n\n");
                                    scanf("%d",&uorp);
                                    if(uorp==1)
                                    {
                                        printf("\nEnter new username\n\n");
                                        scanf("%s",newusername);
                                        strcpy(username,newusername);
                                        printf("\nUsername updated!!\n\n");
                                    }
                                    else if(uorp==2)
                                    {
                                        printf("\nEnter new Password\n\n");
                                        scanf("%s",newpassword);
                                        strcpy(password,newpassword);
                                        printf("\nPassword Updated\n\n");
                                    }

                                }
                                break;
                                case 2:
                                {
                                    printf("\nUpdate cost\n\n" );
                                    printf("\nEnter product id\n\n");
                                    scanf("%d",&id);
                                    printf("\nEnter new cost\n\n");
                                    scanf("%d",&price);
                                    for(int i=0;i<20;i++)
                                    {
                                        if(p[i].id==id)
                                        {
                                            p[i].price=price;
                                            printf("\nCost Updated\n\n");
                                            break;
                                        }
                                    }
                                }
                                break;
                                case 3:
                                {
                                    printf("\nUpdate stock\n\n");
                                    printf("\nenter product id\n\n");
                                    scanf("%d",&id);
                                    printf("\nenter the amount of stock to be updated\n\n");
                                    scanf("%d",&stockupdate);
                                    for(int i=0;i<20;i++)
                                    {
                                        if(p[i].id==id)
                                        {
                                            p[i].quantity=p[i].quantity+stockupdate;
                                            printf("\nstock Updated\n\n");
                                            break;
                                        }
                                    }
                                }
                                break;
                                case 4:
                                {
                                    printf("\nEnter new discount percentage\n\n");
                                    scanf("%d",&newdiscount);
                                    discount=newdiscount;
                                    printf("\nDiscount updated to %d%\n\n",discount);
                                    break;
                                }
                                case 5:
                                {
                                    printf("\nproduct details are:\n\n");
                                    printf("ProductID\tProductName\t\tPrice\tQuantity\n");
                                    printf("------------------------------------------------------------\n");
                                    for(int i=0;i<20;i++)
                                    {
                                        printf("%1d\t\t%-13s\t\t%-1d\t%-1d\n",p[i].id,p[i].name,p[i].price,p[i].quantity);

                                    }

                                }
                                break;
                                case 6:
                                {
                                    goto l1;
                                }
                            }
                        }
                    }
                    else
                    {
                        printf("Invalid UserName or Password\n");
                        goto l1;
                    }

                        case 2:l2:
                        {
                            printf("\n\nWelcome!!!\n\n");
                            printf("Enter the product count\n\n");
                            scanf("%d",&pcount);
                            printf("\nEnter the product id followed by Quantity\n\n");
                            for(int i=0;i<pcount;i++)
                            {
                                scanf("%d%d",&b[i].id,&b[i].quantity);
                            }
                            subtotal=0;
                            total=0;
                            discount=15;
                            for(int i=0;i<pcount;i++)
                            {
                                for(int j=0;j<20;j++)
                                {
                                    if(b[i].id==p[j].id && b[i].quantity>p[j].quantity)
                                    {
                                        printf("The available stock count for product id %d is %d. Please try again later!!\n ",p[j].id,p[j].quantity);
                                        goto l1;
                                    }
                                }
                            }
                            printf("---------------------------------------------------------------------------------------------------------\n");
                            printf("\t\t\t\tThank you for visiting Shravya stores!!\n\n");
                            printf("Date: %d/%d/%d\t\t\tTime: %d:%d:%d\t\t\tBillno: %d\n\n",stime.wDay,stime.wMonth,stime.wYear,hours,mins,seconds,billno);
                            printf("Product Id\tQuantity\tPrice per Quantity\tprice\n");
                             printf("---------------------------------------------------------------------------------------------------------\n\n");
                            for(int i=0;i<pcount;i++)
                            {
                                for(int j=0;j<20;j++)
                                {
                                    if(b[i].id==p[j].id && b[i].quantity<=p[j].quantity)
                                    {
                                        printf("%1d\t\t%-1d\t\t\t%-1d\t\t%-1d\n",p[j].id,b[i].quantity,p[j].price,b[i].quantity*p[j].price);
                                        subtotal=subtotal+b[i].quantity*p[j].price;
                                    }
                                }
                            }
                            billno++;
                            printf("\t\t\t\t    subtotal:\t\t%d\n",subtotal);
                            if(subtotal>=3000 && subtotal<=5000)
                                discount=discount+5;
                            else if(subtotal>=5000)
                                discount=discount+10;

                            total=subtotal-(subtotal*discount/100);
                            printf("\t\t\t\t    Discount:\t\t%d\n",discount);
                            printf("\t\t\t\t    Total:   \t\t%d\n",total);
                            printf("------------------------------------------------------------------------------------------------------\n");
                            printf("want to Continue[1] or no[0]?\n");
                            scanf("%d",&bachoice);
                            switch(bachoice)
                            {
                                case 1:
                                    goto l2;
                                    break;
                                case 0:
                                    goto l1;
                                    break;
                            }
                    }
        }
    }

}
