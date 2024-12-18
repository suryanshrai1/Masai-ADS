/* 2.5.1Frequency of characters */

#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    getchar();
    char A[N+1];
    fgets(A, sizeof(A), stdin);
    
    int freq[26] = {0};
    
    for (int i = 0; i < N; i++) {
        freq[A[i] - 'a']++;
    }
    
    int printed[26] = {0};
    for (int i = 0; i < N; i++) {
        int index = A[i] - 'a';
        if (!printed[index]) {
            printf("%c %d\n", A[i], freq[index]);
            printed[index] = 1;
        }
    }
    
    return 0;
}