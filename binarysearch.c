#include <stdio.h>

int bin(int *a, int s, int e, int target) {
    if (s > e) return 0;
    int mid = (s + e) / 2;
    if (a[mid] == target) return 1;
    if (a[mid] > target) {
        return bin(a, s, mid - 1, target);
    } else {
        return bin(a, mid + 1, e, target);
    }
}

int main() {
    int n, s, i, j, temp;
    
    scanf("%d %d", &n, &s);
    int a[n];
    
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    int found = bin(a, 0, n - 1, s);
    
    if (found) {
        printf("Element found\n");
    } else {
        printf("Element not found\n");
    }
    
    return 0;
}
