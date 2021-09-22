//Write a program to find whether 2 arrays are the same.
#include <iostream>
using namespace std;
int main(){
  int n;
  bool flag=true;
  cin>>n;
  int arr1[n],arr2[n];
  for(int i=0;i<n;i++)
    cin>>arr1[i];
  for(int i=0;i<n;i++)
    cin>>arr2[i];
    
  for(int i=0;i<n;i++){
    if(arr1[i] != arr2[i])
      flag=false;
  }
  
  if(flag)
    cout<<"yes";
  else
    cout<<"no";
  
  return 0;
}