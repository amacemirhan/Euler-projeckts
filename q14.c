#include <stdio.h>
#include <stdlib.h>

int main()
{
    long A=2;
    long maxA=0;
    long max=0;
    long long say=0;
    long long X;
    for(;A<1000000;A++){
            for(X=A;X!=1;){
               if(X%2==0)
                    X=X/2;
                    else
                    X=(3*X)+1;
                    say++;
                if (X==1){
                    if(say>max){
                         max=say;
                         maxA=A;
                    }
                    say=0;
                }


            }
    }
    printf("%ld",maxA);
    return 0;
}
