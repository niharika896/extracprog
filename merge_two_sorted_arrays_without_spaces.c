#include <stdio.h>
int main(){
	int a[]={0,1};
	int b[]={2,3};
	int na=2;
	int nb=2;
	for(int i=0;i<nb;i++){
		if(b[i]<a[na-1-i]){
			int temp=b[i];
			b[i]=a[na-1-i];
			a[na-1-i]=temp;
		}
	}
	for(int i=0;i<na;i++)for(int j=0;j<na-i-1;j++)if(a[j]>a[j+1]){
		int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
	}
	for(int i=0;i<nb;i++)for(int j=0;j<nb-i-1;j++)if(b[j]>b[j+1]){
		int temp=b[j];
			b[j]=b[j+1];
			b[j+1]=temp;
	}
	for(int i=0;i<na;i++)printf("%d ",a[i]);
	printf("\n");
	for(int i=0;i<nb;i++)printf("%d ",b[i]);
	return 0;
}
