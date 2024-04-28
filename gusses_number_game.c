// Gusseing a number game play.
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int number, user , nogusses=1;
int main(){
    srand(time(0));
    printf("Gusses the number between 1 to 20 \n");
    number= rand()%20+ 1;

    do
    {
        printf("Enter the number: \n");
        scanf("%d",&user);

        if (user > number)
        {
            printf("lower number enter please\n");
        }
        else if (user < number )
        {
            printf("higher number enter please\n");
        }
        else
        {
            printf("You gusse right after %d attempts",nogusses);
        }
    nogusses++;
    } while (user!=number);
    



}