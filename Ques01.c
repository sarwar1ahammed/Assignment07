#include <stdio.h>
int main()
{
    // find the Nth term of the Fibonnaci series.

    int prev=1, curr=1, next, nth, i;
    printf("Enter the nth term for Fibonnaci series. : ");
    scanf("%d", &nth);
    
    for (i=2; i<nth; i++)
    {
        next = prev + curr;
        
        prev = curr;
        curr = next;
    }
    printf("The %d term of the Fibonnaci series is %d", nth, next);
    
    return 0;
}