#include<stdio.h>
#include<math.h>
int main(){
    int test_case,doors;
    int states,i=0;
    scanf("%d",&test_case);
    int a[test_case];
    while(i<=test_case){
        int y;
        scanf("%d",&doors);
        y=(int)sqrt(doors);
        a[i]=y;
        i++;
    }
    for(i=1;i<=test_case;i++){
        printf("%d",a[i]);
    }
    return 0;
}