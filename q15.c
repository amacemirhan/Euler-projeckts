#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,j;
    scanf("%d",&a);
    scanf("%d",&b);
    long long matris[a+1][b+1];
    for (i=0;i<a+1;i++){
        for(j=0;j<b+1;j++){
            if (i==0 || j==0 )
                matris[i][j]=1;
        }
    }
    for (i=0;i<a+1;i++){
        for(j=0;j<b+1;j++){
              if (i!=0 && j!=0)
            matris[i][j]=matris[i-1][j]+matris[i][j-1];
        }
    }

    printf("%lld ",matris[a][b]);
    return 0;
}
