/* 2.5.2Alan_&_Frequency */

#include <stdio.h>

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
    
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c-%d\n", 'a' + i, freq[i]);
        }
    }
    
    return 0;
}