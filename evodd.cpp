#include<iostream>
using namespace std;

int main(){
    int t,n,i=0,j=0;
    cin>>t>>n;
    int arr[n],even[n],odd[n];
    while(i<t){
        for(j=0;j<n;j++){
            cin>>arr[j];
        }
        for(j=0;j<n;j++){
            if(arr[j] == 0 || arr[j]%2 == 0)
                even[i]=arr[j];
            else
                odd[j]=arr[j];
        }
        for(j=0;j<n;j++){
            cout<<even[j];
        }
        for(j=0;j<n;j++){
            cout<<odd[j];
        }
        i++;
    }
}