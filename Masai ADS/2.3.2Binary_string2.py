# /* 2.3.2Binary_string2 */
def longest_ones_substring():
    N = int(input())
    binary_str = input().strip()

    max_len = 0
    current_len = 0

    for char in binary_str:
        if char == '1':
            current_len += 1
        else:
            max_len = max(max_len, current_len)
            current_len = 0
    
    max_len = max(max_len, current_len)
    
    print(max_len)

longest_ones_substring()