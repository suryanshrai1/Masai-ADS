#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        
        int temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        int arr[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        
        selectionSort(arr, n);
        
        int k = n - m;
        int minSum = 0, maxSum = 0;
        
        for (int i = 0; i < k; i++) {
            minSum += arr[i];
        }
        
        for (int i = n - k; i < n; i++) {
            maxSum += arr[i];
        }
        
        printf("%d\n", maxSum - minSum);
    }

    return 0;
}
