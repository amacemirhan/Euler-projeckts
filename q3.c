#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int IsPrime(int i) {
int j;
for(j = 2; j <= (i/j); j++)
if(!(i%j)) break;
if(j > (i/j)) return 1;
return 0;
}

int main()
{
    long long a=600851475143;
    for(int i=2;i<sqrt(a);i++){
        if(a%i==0 && IsPrime(i)==1)
            printf("%d\n",i);
    }

    return 0;
}
