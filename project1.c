#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num,comp,count=1;
    srand(time(0));
    comp = rand()%100 + 1;
    do
    {
    printf("Guess the integer\n");
    scanf("%d",&num);
    if(num>comp)
    {
        printf("You need  smaller number!\n");
    }
    else if(num<comp)
    {
        printf("You need  greater number!\n");
    }
    else
    {
        printf("You guessed the number in %d attempts\n",count);
    }
    count++;
    } while(num!=comp);
    return 0;
}