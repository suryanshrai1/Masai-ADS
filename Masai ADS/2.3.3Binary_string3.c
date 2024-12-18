/* 2.3.3Binary_string3*/
#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char str[101];

    scanf("%d", &N);
    scanf("%s", str);
    
    int first_one = -1;
    int last_one = -1;
    
    for (int i = 0; i < N; i++) {
        if (str[i] == '1') {
            if (first_one == -1) {
                first_one = i;
            }
            last_one = i;
        }
    }
    
    if (first_one == -1 || last_one == -1 || first_one == last_one) {
        printf("0\n");
    } else {
        printf("%d\n", last_one - first_one + 1);
    }
    
    return 0;
}