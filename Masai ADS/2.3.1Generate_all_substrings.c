/* 2.3.1Generate_all_substrings*/
#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);
    
    while (T--) {
        scanf("%d", &N);
        char str[N + 1];
        scanf("%s", str);
        
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j <= N; j++) {
                for (int k = i; k < j; k++) {
                    printf("%c", str[k]);
                }
                printf("\n");
            }
        }
    }
    
    return 0;
}