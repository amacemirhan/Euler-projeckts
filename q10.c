#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.*/
int isPrime(int i);
int main()
{
    long long int top=0;
    for(int i=2; i<2000000; i++)
    {
        if(isPrime(i))
            top+=i;
    }
    printf("%lli",top);
}
int isPrime(int i)
{
    int j;
    for(j = 2; j <= (i/j); j++)
        if(!(i%j))
            break;
    if(j > (i/j))
        return 1;
    return 0;
}

