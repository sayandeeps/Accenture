// Online C compiler to run C program online
#include <stdio.h>
// Function to calculate the length of a string
int length(char *str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

// Function to check if a string is a palindrome
int is_palindrome(char *str) {
    int start = 0;
    int end = length(str)-1;
    while (start < end) {
        if (str[start] != str[end]) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
// Function to find the length of the longest palindrome word
int solve(int n, char *str) {
    char words[100][100];//[word][]"wor","fg"
    int wcount = 0, j = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            words[wcount][j] = '\0';
            wcount++;
            j = 0;
        } else {
            words[wcount][j] = str[i];
            j++;
        }
    }
    int max = 0;
    for (int i = 0; i <= wcount; i++) {
        if (is_palindrome(words[i])) {
        //     // printf("%s ",words[i]);
            if (length(words[i]) > max) {
                max = length(words[i]);
                
             }
        }
    }
    return max;
}
int main() {
    char str[] = "madam level radar racecar sfasegaergearg malayalam";
    int n = length(str);
    printf("Length of the longest palindrome word: %d\n", solve(n, str));
    return 0;
}
