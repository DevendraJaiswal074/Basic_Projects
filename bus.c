#include <stdio.h>
#include <string.h>

char user_name[] = "dev";
int password = 4444;

char user[];
int pass;

void list();
void bus_list();   // choice 1
void bus_ticket(); // choice 2

int busno, choice,shets,customerid=1001, registation=12001;
int bookedshets[];
int customername[];

void login()
{
    printf("\n=========================================================================================\n");
    printf("\n\t\t\tWELCOME TO ONLINE BUS RESERVATION");
    printf("\n=========================================================================================\n");

    printf("Enter User Name : ");
    scanf("%s", &user);
    printf("\n");
    printf("Enter The Password : ");
    scanf("%d", &pass);

    if (pass == password)
    {
        printf("login is success");
        list();
    }
    else
    {
        printf("Ooops..! invaild user ID");
    }
}

void list()
{
    printf("\n\n====================================================================\n\n");
    printf("\t\t\t\033[1;31mBUS RESERVATION\033[0m\t\t");
    printf("\n\n=====================================================================\n");
    printf("\n====================");
    printf("  MAIN MENU ");
    printf("=====================\n\n");
    printf("   \033[1;31m[1]\033[0m VIEW BUS LIST \n\n");
    printf("   \033[1;31m[2]\033[0m BOOK TICKETS\n\n");
    printf("   \033[1;31m[3]\033[0m CANCEL BOOKING\n\n");
    printf("   \033[1;31m[4]\033[0m BUSES SEATS INFO\n\n");
    printf("   \033[1;31m[5]\033[0m RESERVATION INFO\n\n");
    printf("   \033[1;31m[6]\033[0m EXIT\n");
    printf("\n=====================================================\n");
    printf("\t\tEnter Any Of Them Number ");
    printf("\n=====================================================\n");
    printf("\n   ENTER YOUR CHOICE: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        bus_list();
    }
    else if (choice == 2)
    {
        bus_ticket();
    }
}

void bus_list()
{
    printf("-----------------------------------------------------------------------------------------");
    printf("\nBus.No\tName\t\t\tDestinations  \t\tCharges  \t\tTime\n");
    printf("-----------------------------------------------------------------------------------------");
    printf("\n1\tGangaTravels         \tDharan to Kavre       \tRs.70   \t\t07:00  AM");
    printf("\n2\tPhaphara Travels     \tKavre To Dharan       \tRs.55    \t\t01:30  PM");
    printf("\n3\tShiv Ganga Travels   \tAllahabad To Gorakhpur\tRs.40    \t\t03:50  PM");
    printf("\n4\tSuper Deluxe         \tPokhara To Benigha    \tRs.70    \t\t01:00  AM");
    printf("\n5\tSai Baba Travels     \tMaitidevi To Janakpur \tRs.55    \t\t12:05  AM");
    printf("\n6\tShine On Travels     \tMadhubani to Patna    \tRs.40    \t\t09:30  AM");
    printf("\n7\tMayur Travels        \tPatna To Gaya         \tRs.70   \t\t11:00  PM");
    printf("\n8\tRajjo Travels       \tBegusarai To Patna     \tRs.55    \t\t08:15  AM");
    printf("\n9\tShree Travels        \tGaya To Chhapra       \tRs.40    \t\t04:00  PM");
    printf("\n");
    // printf("\n   PRESS 'ENTER' KEY TO CONTINUE ");
}

void bus_ticket()
{
    printf("-----------------------------------------------------------------------------------------");
    printf("\nBus.No\tName\t\t\tDestinations  \t\tCharges  \t\tTime\n");
    printf("-----------------------------------------------------------------------------------------");
    printf("\n1\tGangaTravels         \tDharan to Kavre       \tRs.70   \t\t07:00  AM");
    printf("\n2\tPhaphara Travels     \tKavre To Dharan       \tRs.55    \t\t01:30  PM");
    printf("\n3\tShiv Ganga Travels   \tAllahabad To Gorakhpur\tRs.40    \t\t03:50  PM");
    printf("\n4\tSuper Deluxe         \tPokhara To Benigha    \tRs.70    \t\t01:00  AM");
    printf("\n5\tSai Baba Travels     \tMaitidevi To Janakpur \tRs.55    \t\t12:05  AM");
    printf("\n6\tShine On Travels     \tMadhubani to Patna    \tRs.40    \t\t09:30  AM");
    printf("\n7\tMayur Travels        \tPatna To Gaya         \tRs.70   \t\t11:00  PM");
    printf("\n8\tRajjo Travels       \tBegusarai To Patna     \tRs.55    \t\t08:15  AM");
    printf("\n9\tShree Travels        \tGaya To Chhapra       \tRs.40    \t\t04:00  PM");
    printf("\n");

    printf("ENTER YOUR BUS SERIAl NUMBER:");
    
    scanf("%d", &busno);
    if (busno > 0 && busno <= 9)
    {
        printf("ENTER THE Seat YOU NEEDED");
        scanf("%d", &shets);

        if (shets > 33)
        {
            printf("sorry there is only 33 seat avail...");
        }
        else
        {
            for (int i = 0; i < 33; i++)
            {
                printf("EMPETY Seat ARE %d \n", i + 1);
            }
            for (int j = 0; j < shets; j++)
            {
                printf("ENTER THE SEAt NUMBER:");
                scanf("%d", &bookedshets[j]);
                if (bookedshets[j] > 33)
                {
                    printf("wrong choose try again letter");
                }
                else
                {
                    printf("ENTER THE NAME :");
                    scanf("%s", &customername);
                    customerid=customerid+1;
                    printf("\n YOUR CUSTOMER ID IS %d \n", customerid);
                }
            }
        }
        printf("YOUR REGISTRATION NUMBER IS : %d \n",registation+1);
        printf("please note your registration id");
    }
    else
    {
        printf("sorry ... wrong choice entered");
    }
    
}

int main()
{
    login();

    return 0;
}