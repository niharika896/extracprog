#include <stdio.h>

int main() {
    int n, i, j, max, temp;
    
    scanf("%d", &n);
    int a[n];
    
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(j=0;j<n;j++){
    	
    max=0;
    for(i=0;i<n-j;i++){
		if(a[i]>a[max])max=i;
	}
	int temp=a[max];
	a[max]=a[n-1-j];
	a[n-1-j]=temp;
	}
    for(i=0;i<n;i++)printf("%d ",a[i]);
    return 0;
}
