#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0, flag = 1;

    printf("Enter any string: ");
    scanf("%s", str);

    while(str[len] != '\0') {
        len++;
    }

    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - 1 - i]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("The given string is a Palindrome.\n");
    else
        printf("The given string is not a Palindrome.\n");
 
}
