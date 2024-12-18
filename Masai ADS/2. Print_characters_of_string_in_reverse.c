#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char str[101]; 
   
    scanf("%d", &N);
    
   
    scanf("%s", str);

   
    for (int i = N - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }

    return 0;
}
