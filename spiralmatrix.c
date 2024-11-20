//spiral matrix
#include <stdio.h>
int main(){
	int i,j,k,n;
	scanf("%d",&n);
	int arr[n][n];int count=1;
	for(i=0;i<n;i++){
	for(k=i;k<n-i;k++){
		arr[i][k]=count++;
	}
	for(k=1+i;k<n-i;k++){
		arr[k][n-1-i]=count++;
	}
	for(k=n-2-i;k>i-1;k--){
		arr[n-1-i][k]=count++;
	}
	for(k=n-2-i;k>i;k--){
		arr[k][i]=count++;
	}
	};
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)printf("%d\t",arr[i][j]);
		printf("\n");
	}
	return 0;
}
