#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,ktop=0,btop=0;
    printf("enter num:");scanf("%d",&a);
    for (int i=1;i<=a;i++){
        ktop+=i*i;
    }
    for (int i=1;i<=a;i++){
        btop+=i;
    }btop=btop*btop;
    printf("%d",btop-ktop);
return 0;}
