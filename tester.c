//
// Created by taylo on 20/11/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char pep[20] = "why";
    char wow[20] = "hello world";
    printf("%s\n", pep);
    strcpy(pep, wow);
    printf("%s\n", pep);
    return 0;

}