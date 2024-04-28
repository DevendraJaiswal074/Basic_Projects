#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int game(char user,char computer)
{
    // if user win return 1 and computer win return -1 and draw of match is 0
    // rr pp ss

    if (user == computer)
    {
        return 0;
    }
    // rp pr , rs sr ,sp ps

    if (user == 'r' && computer == 'p')
    {
        return 1;
    }
    else
    {
        return -1;
    }

    if (user == 'r' && computer == 's')
    {
        return 1;
    }
    else
    {
        return -1;
    }

    if (user == 's' && computer == 'p')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int game2(char user){
    int number;
    char computer;
    srand(time(0));
    number = rand() % 20 + 1;
    if (number < 7)
    {
        computer = 'r';
    }
    if (number >= 7 && number < 14)
    {
        computer = 'p';
    }
    if (number >= 14 && number <= 20)
    {
        computer = 'c';
    }

    int result;
    result = game(user, computer);
    printf("\n");
    printf("your choice is %c and the computer choice is %c \n",user ,computer);
    if (result==1)
    {
        printf("you are winner .. ");
    }
    if (result==-1)
    {
        printf("computer are winner .. ");
    }
    if (result==0)
    {
        printf("GAME DRAW....!! ");
    }
}

int main()
{
    char user;
    printf("Enter Choose Any One Option \n");
    printf("'r' for rock \n'p' for paper \n'c' for scissor  \n");
    printf("Enter :");
    scanf("%c", &user);
    if (user!='c' && user!= 'r' && user!='p')
    {
        printf("your choice is wrong ..! try again ....");
    }

    else
    {
        game2(user);
    }
    

}