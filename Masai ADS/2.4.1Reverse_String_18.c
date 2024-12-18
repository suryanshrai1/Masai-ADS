/* 2.4.1Reverse_String_18 */
#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int start = 0;
    int end = strlen(str) - 1;
    
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        char str[100001];
        scanf("%s", str);
        reverseString(str);
        printf("%s\n", str);
    }
    
    return 0;
}