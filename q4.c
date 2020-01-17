#include <stdio.h>
#include <stdlib.h>
int pal(num){
    int top=0,numc=num;
    while (num!=0){
            top=top*10;
        top+=num%10;
    num=num/10;
    }
    if (top==numc)
       return numc;
       else return NULL;
}
int main(){
    int a=100,b,max=0,maxx=0;
    for (a=100;a<=999;a++){
    for (b=a;b<=999;b++){
           max=pal(a*b);
           if(max>maxx)
            maxx=max;
    }
    }
   printf("%d",maxx);
    return 0;
}
