#include<stdio.h>


void removeDuplicates(int arr[], int n) {
    if (n == 0) {
        printf("0\n");
        return;
    }
    
    int write_index = 1;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            arr[write_index] = arr[i];
            write_index++;
        }
    }
    
    printf("%d\n", write_index);
    for (int i = 0; i < write_index; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        removeDuplicates(arr, n);
    }
    return 0;
}
