#include <iostream>
using namespace std;

void rotate(int arr[],int k,int len){
    
    for(int j=0;j<k;j++){
        int first=arr[0];
        for(int i=0;i<len-1;i++){
            arr[i]=arr[i+1];
        }
    arr[len-1]=first;
    }
    
}

int main(){
  int n,d,i=0,j=0;
  cin>>n>>d;
  int a1[n];
  for(int i=0;i<n;i++){
    cin>>a1[i];
  }
  rotate(a1,d,n);
  for(i=0;i<n;i++)
  cout<<a1[i];
  return 0;
}