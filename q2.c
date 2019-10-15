#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1=1,num2=1,num3,i,j,top,total=0,array2,array[42]={num1,num2};

    for(i=0;i<=30;i++){
    num3=num1+num2;
    array[i+2]=num3;
    num1=num2;
    num2=num3;
    }

    for (j=0;j<=32;j++){
    printf("%d\n",array[j]);
    if (array[j]%2==0){
        top=array[j];
        total=total+top;
    }
    }

    printf("%d",total);

    return 0;
}
