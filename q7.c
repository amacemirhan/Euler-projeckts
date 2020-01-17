#include <stdio.h>
#include <stdlib.h>
int isPrime(int x){
    if (x==1)
    return 0;
    for (int i=2;i<x;i++){
    if (x==2)
    return 1;
    else if (x%i==0)
    return 0;
    else
    continue;
}
return 1;
}
int main(){
int num=3,sayac=1;
for (num=3;;num++){
    if(isPrime(num))
        sayac++;
        if (sayac==10001){
            printf("%d",num);
            break;}
}
return 0;}
