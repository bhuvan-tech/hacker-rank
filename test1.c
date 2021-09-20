#include<stdio.h>
int main(){
    int x=0,y=1,z=2;
    *((x+1==1) ? &y : &x)=x ? y:z;
    printf("%d,%d,%d\n",x,y,z);
    return 0;
}