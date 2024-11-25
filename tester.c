//
// Created by taylo on 20/11/2024.
//
#include <ctype.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[150];
    printf("Enter a word: ");
    scanf("%s", word);
    int i = 0;
    while (word[i] != '\0') {
        if (!isalpha(word[i])) {
            printf("The word contains symbols.\n");

        }

        else{
            printf("the word doesnt contain symbols.\n");
        }
        i++;
    }
    return 0;
}