/* 2.4.3Reverse_string_again */
#include <stdio.h>
#include <string.h>

void reverseWord(char* start, char* end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int T;
    scanf("%d", &T);
    getchar();
    
    while (T--) {
        char str[10001];
        fgets(str, sizeof(str), stdin);
        
        int len = strlen(str);
        if (str[len - 1] == '\n') {
            str[len - 1] = '\0';
        }
        
        int start = 0;
        for (int i = 0; i <= len; i++) {
            if (str[i] == ' ' || str[i] == '\0') {
                reverseWord(&str[start], &str[i - 1]);
                start = i + 1;
            }
        }
        
        printf("%s\n", str);
    }

    return 0;
}