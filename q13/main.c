#include <stdio.h>
#include <stdlib.h>

int main()
{
    int LargeSum[100][50];
    int terssonuc[1][100];
    int i,j,top=0;
    int Elde=0;
    FILE *dosya=fopen("LargeSum.txt","r");
    for(i=0;i<100;i++){
        for(j=0;j<50;j++){
            fscanf(dosya,"%1d",&LargeSum[i][j]);
        }
    }
    int k=0;
        for(j=49;j>=0;j--){
            for(i=0;i<100;i++){
            top+=LargeSum[i][j];

            }
            top+=Elde%10;
            Elde=Elde/10;
            terssonuc[0][k]=top%10;
            Elde+=top/10;
            top=0;
            k++;
            if(j==0 && Elde!=0){
                    while(Elde!=0){
                terssonuc[0][k]=Elde%10;
                Elde=Elde/10;
                k++;
                }
            }
        }k--;
        for(;k>=0;k--){
          printf("%d",terssonuc[0][k]);
        }

    return 0;
}
