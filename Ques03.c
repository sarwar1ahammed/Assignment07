#include <stdio.h>
int main()
{
    // whether a given number is there in the Fibonacci series or not.

    int  prev=0, curr=1, next=0, num, i;
    printf("Enter a number to found fibonacci series : ");
    scanf("%d", &num);

    if (num == 0 || num == 1)
        printf("%d is a Fibonacci Number.", num);
    else
    {
        for (i=0; 1; i++)
        {
            
            next = prev + curr;

            prev = curr;
            curr = next;   

            if (next == num)
            {   printf("%d is in Fibonacci Number Series.", num);
                break;
            }
            else if (next>num)
            {
                printf("%d is not in Fibonacci Number Series.", num);
                break;
            }
        }
    }

    return 0;
}