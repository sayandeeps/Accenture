#include <stdio.h>

void moveHyphensToStart(char *str) {
    int i = 0, j = 0, k = 0;
    int hyphenCount = 0;
    char temp[100]; 

    while (str[i] != '\0') {
        if (str[i] == '-') {
            hyphenCount++;
        } else {
            temp[j++] = str[i];
        }
        i++;
    }
    temp[j] = '\0'; 


    for (k = 0; k < hyphenCount; k++) {
        str[k] = '-';
    }


    for (i = 0; temp[i] != '\0'; i++) {
        str[k++] = temp[i];
    }
    str[k] = '\0'; 
}

int main() {
    char str[100];
    scanf("%[^\n]s",str);
 
    int len = 0;
    while (str[len] != '\0') {
        if (str[len] == '\n') {
            str[len] = '\0';
            break;
        }
        len++;
    }

    moveHyphensToStart(str);

    printf("%s\n", str);

    return 0;
}
