#include<stdio.h>

int main() {
    int N, k, count = 0;
    scanf("%d %d", &N, &k);

    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < N; i += 2) {
        if(arr[i] <= k) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}