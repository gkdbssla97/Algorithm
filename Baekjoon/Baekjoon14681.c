//
// Created by 하윤 on 2021/07/28.
//prob.14681

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable 4996)
#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    if (n1 > 0 && n2 > 0)
        printf("1");
    else if (n1 < 0 && n2 > 0)
        printf("2");
    else if (n1 < 0 && n2 < 0)
        printf("3");
    else if (n1 > 0 && n2 < 0)
        printf("4");
    return 0;
}