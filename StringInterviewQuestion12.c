// String Interview Question 12
// Created by alex on 9/19/2023.

#include <stdio.h>

int main() {
    int length;
    printf("how long is your string:");
    scanf("%d", &length);

    printf("enter the string:");
    char str[length];
    scanf("%s", &str);

    int i;
    int cnt = 0;
    for (i = 0; i < length; i++) {
        printf("\n%d", str[i]);
        if (str[i] == ' ') cnt++;
    }
    printf("%d spaces", cnt);



}
