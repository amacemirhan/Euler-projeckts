#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0,y=0,top=0,array[500];
    for (;x<1000;x++){
        if (x%3==0 || x%5==0 && !(x%15==0)){
            array[y]=x;
            top=top+array[y];
            y++;
        }
    }
printf("%d\n",top);
printf("%d\n",y);
    return 0;
}
