#include<stdio.h>
int main(){
    int w;
    scanf("%d",&w);
    if(w<0){
        printf("invalid");
    }
    else if(w>0 && w<=200){
        printf("25 min");
    }
    else if(w>2000 && w<=4000){
        printf("35 min");
    }
    else if(w>4000 && w<7000){
        printf("45 min");
    }
    else{
        printf("overloaded");
    }
    return 0;
}