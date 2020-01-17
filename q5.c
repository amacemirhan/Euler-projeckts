#include <stdio.h>
#include <stdlib.h>
int main(){
    int a=1;
        for (int i=1;i<=20;i++){
            if (a%i!=0){
        a++;
        i=1;}}

    printf("%d",a);

}
