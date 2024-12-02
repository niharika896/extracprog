//Magic Square Method 1
#include <stdio.h>
int main(){
	int n; scanf("%d",&n);
	int arr[n][n];
	int c,i,j;
	for(i=0;i<n;i++) for(j=0;j<n;j++) arr[i][j]=0;
	int k=1; 
	arr[n/2][n-1]=k++;
	i=n/2;j=n-1;
	for(c=0;c<n*n-1;c++){
		i=i-1;j=j+1;
		if(i==-1 && j!=n) i=n-1;
		else if(j==n & i!=-1) j=0;
		else if(i==-1 && j==n) {
			i=0;j=n-2;
		};
		if(arr[i][j]!=0){
			i=i+1;j=j-2;
		}
		arr[i][j]=k++;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++) printf("%d\t",arr[i][j]);
		printf("\n");
	}
	return 0;
}

// Method 2
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)a[i][j]=0;
    int count=1;
    int i=n/2,j=n-1;
    while(count<=n*n){
        a[i][j]=count++;
        i--;j++;
        if(i==-1 && j!=n)i=n-1;
        else if(j==n && i!=-1)j=0;
        else if(j==n && i==-1){i=0;j=n-2;}

        if(a[i][j]!=0){i++;j-=2;}
    };
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)printf("%d ",a[i][j]);
    printf("\n");
    }
    return 0;
} 
