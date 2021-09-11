/*Avanthika is weak in the concepts of number series. She is given a number L and has to nd L terms of the series. The series is as follows 1, 2, 5, 8,15. . . .

Input Format

You are given an integer p denoting the number of test cases. The next subsequent lines contain an integer L denoting the number of terms till which the series needs to be printed.

Constraints

1<= p<= 100 1<= L<= 50

Output Format

For each test case, print the series up to L terms.*/



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,p,j;
    scanf("%d",&p);
    for(i=0;i<p;i++){
        int l;
        int a[50];
        scanf("%d",&l);
        if(l==1){
            printf("1"); 
        }
        else if(l==2){
            printf("2");
        }
        else if(l==30){
            printf("5");
        }
        a[0]=1;
        a[1]=2;
        a[2]=5;
        
        for(j=3;j<l;j++){
            a[j]=a[j-1]+a[j-2]+a[j-3];
        }
        for(j=0;j<l;j++)
        printf("%d ",a[j]);
        printf("\n");
    }
    return 0;
    
}

