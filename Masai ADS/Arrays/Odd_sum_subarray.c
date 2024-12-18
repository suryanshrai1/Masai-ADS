#include <stdio.h>

int countOddSumSubarr(int arr[], int N) {
    int oddSumCount = 0;

    for (int i = 0; i < N; i++) {
        int sum = 0;
        for (int j = i; j < N; j++) {
            sum += arr[j];
            if (sum % 2 != 0) {
                oddSumCount++;
            }
        }
    }

    return oddSumCount;
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int result = countOddSumSubarr(arr, N);
    printf("%d\n", result);

    return 0;
}
