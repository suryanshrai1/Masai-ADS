#include <stdio.h>

int countOddSumSubseq(int arr[], int N) {
    int count = 0;
    int totalSubseq = 1 << N; 

    for (int i = 1; i < totalSubseq; i++) {
        int sum = 0;
        for (int j = 0; j < N; j++) {
            if (i & (1 << j)) { 
                sum += arr[j];
            }
        }
        if (sum % 2 != 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int arr[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }

        int result = countOddSumSubseq(arr, N);
        printf("%d\n", result);
    }

    return 0;
}
