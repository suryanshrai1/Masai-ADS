#include <stdio.h>

int main() {
    int N;
    char str[1000];

    scanf("%d", &N);
    
    scanf("%s", str);


    for (int i = 0; i < N; i += 2) {
        printf("%c\n", str[i]);
    }
    return 0;
}