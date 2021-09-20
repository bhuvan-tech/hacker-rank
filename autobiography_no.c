#include<string.h>
#include<stdio.h>
void main(){
    char str[11];
    scanf("%s",&str);
    int n=strlen(str);
    int sum=0,i=0,c;
    /* length of string is equal to sum of elements in string*/
    for(i=0;i<n;i++){
        sum=sum + (str[i] - '0');
        /* because 0 is 48 in askew value */
    }
    if(sum == n){
        int c=0,freq[10]={0};
        for(i=0;i<n;i++){
            freq[str[i]-'0']++; 
            /* here str [i] is the char */
        }
        for(i=0;i<n;i++){
            if(freq[i]!=0){
                c++;
            }
        }
    }
    else{
        printf("0");
    }
}