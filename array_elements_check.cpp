#include <iostream>
using namespace std;


int main(){
  int n,m,i=0,j=0,count=0;
  cin>>n>>m;
  int a1[n],a2[m];
  for(int i=0;i<n;i++){
    cin>>a1[i];
  }
  for(int i=0;i<m;i++){
    cin>>a2[i];
  }
  
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      if(a1[i]==a2[j]) 
        count++;
    }
  }
  cout<<count;
  return 0;
}