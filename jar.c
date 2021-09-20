#include<stdio.h>
void main(){
	int n=10,k=5;
	int num;
	scanf("%d",&num);
	if(num>0 && n-num>=k){
		printf("Sold:%d",num);
		printf("available: %d\n",n-num);
	}
	else{
	printf("INVALID INPUT\n");
	printf("AVAILABLE:%d",n);
	}
}
