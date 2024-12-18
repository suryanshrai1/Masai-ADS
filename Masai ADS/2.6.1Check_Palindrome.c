/* 2.6.1Check_Palindrome*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[101];  // string with max length 100 + 1 for null terminator
    int len, isPalindrome = 1;

    scanf("%s", str);

    len = strlen(str);  

// palindrome check
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0; 
            break;
        }
    }

   
    if (isPalindrome) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
