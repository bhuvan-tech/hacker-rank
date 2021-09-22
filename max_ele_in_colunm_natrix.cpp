// Write a program to find the maximum element in each column of the matrix.

#include <iostream>
using namespace std;

int main(){
  int n,m,i=0,j=0;
  cin>>m>>n;
  int arr[m][n];
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
    cin>>arr[i][j];  
    }
    
  }
  int max=0;
  for(j=0;j<n;j++){
    for(i=0;i<m;i++){
      if(max<arr[i][j])
        max=arr[i][j];
    }
    cout<<max<<endl;
  }
  
  
  return 0;
}