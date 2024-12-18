#include <stdio.h>

int main() {
    int N;
    char str[101];

   
    scanf("%d", &N);
    
  
    scanf("%s", str);

    
    for (int i = 1; i < N; i += 2) {
        printf("%c\n", str[i]);
    }

    return 0;
}
