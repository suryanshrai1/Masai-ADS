#include <stdio.h>
#include <ctype.h>

int main() {
    int N, i, isVowel = 0;
    char str[101];

    scanf("%d", &N);
    getchar();  // Consume the newline character left by scanf
    scanf("%s", str);

    for (i = 0; i < N; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            isVowel = 1;
            break;
        }
    }

    if (isVowel) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
