//
// Created by 하윤 on 2021/07/28.
//prob.1330

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable 4996)
#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    if (n1 > n2)
        printf(">");
    else if (n1 < n2)
        printf("<");
    else
        printf("==");


    return 0;
}