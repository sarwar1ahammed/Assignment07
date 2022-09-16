#include <stdio.h>
int main()
{
    // print first N terms of Fibonacci series

    int  prev=1, curr=1, next, nth, i;
    printf("Enter the nth term of Fibonacci series : ");
    scanf("%d", &nth);

    printf("%d %d ", prev, curr);

    for (i=2; i<nth; i++)
    {
        
        next = prev + curr;
        printf("%d ", next);

        prev = curr;
        curr = next;

    }


    return 0;
}