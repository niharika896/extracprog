#include <stdio.h>
int main(){
	int a[]={1,2,3,4,5,6};
	int n=6;
	int ar[n];
	for(int i=0;i<n;i++)ar[i]=0;
	int f=(n%2==0)?n/2:(n+1)/2;
	for(int i=0;i<f;i++){
		ar[2*i+1]=a[i];
	}
	for(int i=0;i<n-f;i++){
		ar[2*i]=a[n-1-i];
	}
	for(int i=0;i<n;i++)printf("%d ",ar[i]);
	return 0;
}
