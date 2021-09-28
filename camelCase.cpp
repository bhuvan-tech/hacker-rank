#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;
int main(){
    char str[]="saveChangesInTheEditor";
    int count=1;
    for(int i=0;i<strlen(str);i++){
        if(isupper(str[i]))
            count++;
    }
    cout<<count;
}