/* 2.4.2Maximize_substring */

#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    char str[N + 1];
    scanf("%s", str);

    int max_index = 0;
    for (int i = 1; i < N; i++) {
        if (strcmp(&str[i], &str[max_index]) > 0) {
            max_index = i;
        }
    }

    printf("%s\n", &str[max_index]);

    return 0;
}