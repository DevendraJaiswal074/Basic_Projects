//ATM MACHINE PROGRAM JUST LIKE ATM:

#include<stdio.h>
int main()
{
    int amount = 10000 , pass = 61111;   //PASS MEANS PASSWORD
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
    printf("                         WELCOME TO SBI ATM \n");
    printf("                       CHOOSE ANY ONE OF THEM \n");
    printf("PRESS 1 FOR WITHDRAWN            :            PRESS 2 FOR CHECK BALANCE \n");
    printf("PRESS 3 FOR ONLINE TRANSACTION   \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");

    printf("ENTER YOUR CHOOSE :-");
    int user ,amt, pin; //input of user choice, user amount , user pin

    scanf("%d",&user);

    if (user==1)
    {
        printf("ENTER YOUR PIN:-");
        scanf("%d",&pin);
        if (pin == pass)
        {
            printf("your total balance is %d \n", amount );
            printf("ENTER YOUR AMOUNT:-");
            scanf("%d",&amt);
            if (amount>=amt)
            {
                printf("YOUR WITHDRWAN IS SUCESSFULL \n");
                printf("balance amount after withdrawn:-%d \n ", amount-amt);
                printf("THANKS FOR USEING ");
            }
            else
            {
                printf("insufficent balance\n");
                printf("THANKS FOR USEING ");
            }
            
            

        }
        else
        {
            printf("WRONG PIN ! TRY ANGAIN LATER❤️");
        }
        
    }
    
    else if (user == 2)
    {
        printf("ENTER YOUR PIN:-");
        scanf("%d",&pin);
        if (pin == pass)
        {
            printf("your balance is:-%d \n", amount);

        }
        else
        {
            printf("WRONG PIN ! TRY ANGAIN LATER");
        }


        
    }
    else if (user == 3)
    {
        printf("ENTER YOUR PIN:-");
        scanf("%d",&pin);
        if (pin == pass)
        {
            int a=1000000003 , no;
            printf("your total balance is :-%d\n", amount );
            printf("ENTER A/C NUMBER:-");
            scanf("%d",&no);
            if (no==a || no<=a)
            {
                int trans;
                printf("enter amount to transfer:-");
                scanf("%d",&trans);
                if (trans<=amount)
                {
                    printf("your amount is sucessfully transfered \n");
                    printf("your balance after process:-%d ",amount-trans);
                }
                else
                {
                    printf("insuficient balance");
                }
                
                
            }
            else
            {
                printf("the A/C no, is wrong");
            }
            
        }
        else
        {
            printf("WRONG PIN ! TRY ANGAIN LATER");
        }
        
    }
    else
    {
        printf("invaild choice!! try again later");
    }
    
    


}