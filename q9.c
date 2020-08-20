#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.*/
int a,b;
void find_a_b();
void isEqual_1000(int c);
int main()
{
    find_a_b();
    return 0;
}
void find_a_b(){
float i,j;
for (i=0;i<3000;i++){
    for (j=i;j<3000;j++){
        //printf("%f * %f = %f\n",i,j,sqrt(i*i+j*j));
        if(sqrt(i*i+j*j)-(int)(sqrt(i*i+j*j))<0.000001){
            a=(int)i;
            b=(int)j;
            isEqual_1000((int)(sqrt(i*i+j*j)));
        }
    }
}


}
void isEqual_1000(int c){
        if(a+b+c==1000 && a<b && b<c){
            printf("%d%d%d\n%d",a,b,c,a*b*c);
        }

}
