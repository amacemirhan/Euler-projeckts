#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int IsEnough(long n){
    long i,a=0;
    float ns=sqrt((double)n);
    for(i=1,a=0;i<ns;i++){
        if(!(n%i))
            a++;
    }
    if(a*2>500)
        return 1;
    else
        return 0;
}
int main()
{
    long i,a=0;
    for(i=1;;i++){
        a+=i;
        if(IsEnough(a))
            break;
    }
    printf("%ld",a);
    return 0;
}
